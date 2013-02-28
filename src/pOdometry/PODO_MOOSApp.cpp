/*****************************************************************/
/*    NAME: Michael Benjamin, Henrik Schmidt, and John Leonard   */
/*    ORGN: Dept of Mechanical Eng / CSAIL, MIT Cambridge MA     */
/*    FILE: PODO_MOOSApp.cpp                                      */
/*    DATE: June 26th, 2008                                      */
/*                                                               */
/* This program is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU General Public License   */
/* as published by the Free Software Foundation; either version  */
/* 2 of the License, or (at your option) any later version.      */
/*                                                               */
/* This program is distributed in the hope that it will be       */
/* useful, but WITHOUT ANY WARRANTY; without even the implied    */
/* warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR       */
/* PURPOSE. See the GNU General Public License for more details. */
/*                                                               */
/* You should have received a copy of the GNU General Public     */
/* License along with this program; if not, write to the Free    */
/* Software Foundation, Inc., 59 Temple Place - Suite 330,       */
/* Boston, MA 02111-1307, USA.                                   */
/*****************************************************************/

#include <iterator>
#include "PODO_MOOSApp.h"
#include "MBUtils.h"
#include <math.h>

using namespace std;

//---------------------------------------------------------
// Constructor

PODO_MOOSApp::PODO_MOOSApp()
{

  first_reading = true;
  current_x = 0;
  current_y = 0;
  previous_x = 0;
  previous_y = 0;
  total_dist = 0;

}

//---------------------------------------------------------
// Procedure: OnNewMail

bool PODO_MOOSApp::OnNewMail(MOOSMSG_LIST &NewMail)
{
  AppCastingMOOSApp::OnNewMail(NewMail);
  MOOSMSG_LIST::iterator p;
  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;
    string key   = msg.GetKey();
    if(key == "NAV_X"){
      current_x  = msg.GetDouble();
    }
    else if(key == "NAV_Y"){
      current_y  = msg.GetDouble();
    }
  }
  return(true);
}


//---------------------------------------------------------
// Procedure: OnConnectToServer

bool PODO_MOOSApp::OnConnectToServer()
{
  RegisterVariables();  
  return(true);
}


//------------------------------------------------------------
// Procedure: RegisterVariables

void PODO_MOOSApp::RegisterVariables()
{
  AppCastingMOOSApp::RegisterVariables();
  
  m_Comms.Register("NAV_X", 0);
  m_Comms.Register("NAV_Y", 0);

}


//---------------------------------------------------------
// Procedure: Iterate()

bool PODO_MOOSApp::Iterate()
{
  AppCastingMOOSApp::Iterate();

  if(!(current_x + current_y == previous_x + previous_y)) {
    total_dist += sqrt(pow((current_x-previous_x),2) + pow((current_y-previous_y),2));
    previous_x = current_x;
    previous_y = current_y;
  }
    
  Notify("ODOMETRY_DIST", total_dist);
  AppCastingMOOSApp::PostReport();
  return(true);
}



//---------------------------------------------------------
// Procedure: OnStartUp()
//      Note: happens before connection is open

bool PODO_MOOSApp::OnStartUp()
{
  AppCastingMOOSApp::OnStartUp();

  STRING_LIST sParams;
  m_MissionReader.EnableVerbatimQuoting(false);
  m_MissionReader.GetConfiguration(GetAppName(), sParams);
    
  STRING_LIST::iterator p;
  for(p = sParams.begin();p!=sParams.end();p++) {
    string sLine     = *p;
    string sVarName  = MOOSChomp(sLine, "=");
    sLine = stripBlankEnds(sLine);
  }

  RegisterVariables();
  return(true);
}

//------------------------------------------------------
//     Procedure: buildReport()
//          Note: called by PostReport() if needed

bool PODO_MOOSApp::buildReport()
{
  
  m_msgs << "Odometer Report: \n";
  m_msgs << "Total Distance Travelled: " << total_dist << endl;
}
