/************************************************************/
/*    NAME: ABelani                                              */
/*    ORGN: MIT                                             */
/*    FILE: CommunicationAngle.cpp                                        */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include "MBUtils.h"
#include "CommunicationAngle.h"
#include "AcoustPair.h"

using namespace std;

//---------------------------------------------------------
// Constructor

CommunicationAngle::CommunicationAngle()
{
  m_iterations = 0;
  m_timewarp   = 1;
  
  my_name = "Nobody";
  targ_name = "Nobody";
  
}

//---------------------------------------------------------
// Destructor

CommunicationAngle::~CommunicationAngle()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool CommunicationAngle::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;
   
  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;
    
    string key   = msg.GetKey();
    string comm  = msg.GetCommunity();
    double dval  = msg.GetDouble();
    string sval  = msg.GetString(); 
    string msrc  = msg.GetSource();
    double mtime = msg.GetTime();
    bool   mdbl  = msg.IsDouble();
    bool   mstr  = msg.IsString();

    
    if ((my_name == "Nobody") && (key == "VEHICLE_NAME")){
      my_name = sval;
    }
    else if((targ_name == "Nobody") && (key == "COLLABORATOR_NAME")){
      targ_name = sval;
      RegisterVariables();
    }
    else if(key == "NAV_X"){
      AcoustPair::set_src_x(dval);
    }
    else if(key == "NAV_Y"){
      AcoustPair::set_src_y(dval);
    }
    else if(key == "NAV_DEPTH"){
      AcoustPair::set_src_d(dval);
    }
    else if(key == targ_name+"_NAV_X"){
      AcoustPair::set_targ_x(dval);
    }
    else if(key == targ_name+"_NAV_Y"){
      AcoustPair::set_targ_y(dval);
    }
    else if(key == targ_name+"_NAV_DEPTH"){
      AcoustPair::set_targ_d(dval);
    }
    else if(key == targ_name+"_HEADING"){
      AcoustPair::set_targ_heading(dval);
    }
    else if(key == targ_name+"_SPEED"){
      AcoustPair::set_targ_speed(dval);
    }
  }
  
  
   return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool CommunicationAngle::OnConnectToServer()
{
   // register for variables here
   // possibly look at the mission file?
   // m_MissionReader.GetConfigurationParam("Name", <string>);
   // m_Comms.Register("VARNAME", 0);
	
   RegisterVariables();
   return(true);
}

//---------------------------------------------------------
// Procedure: Iterate()
//            happens AppTick times per second

bool CommunicationAngle::Iterate()
{
  m_iterations++;
  return(true);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool CommunicationAngle::OnStartUp()
{
  list<string> sParams;
  m_MissionReader.EnableVerbatimQuoting(false);
  if(m_MissionReader.GetConfiguration(GetAppName(), sParams)) {
    list<string>::iterator p;
    for(p=sParams.begin(); p!=sParams.end(); p++) {
      string original_line = *p;
      string param = stripBlankEnds(toupper(biteString(*p, '=')));
      string value = stripBlankEnds(*p);
      
      if(param == "SURFACE_SOUND_SPEED") {
        C_0 = strtod(value.c_str(),NULL);
      }
      else if(param == "SOUND_SPEED_GRADIENT") {
        G_0 = strtod(value.c_str(),NULL);
      }
      else if(param == "WATER_DEPTH"){
	depth_0 = strtod(value.c_str(),NULL);
      }
      else if(param == "TIME_INTERVAL"){}	
    }
  }
  
  m_timewarp = GetMOOSTimeWarp();

  RegisterVariables();	
  return(true);
}

//---------------------------------------------------------
// Procedure: RegisterVariables

void CommunicationAngle::RegisterVariables()
{
  m_Comms.Register("VEHICLE_NAME", 0);
  m_Comms.Register("COLLABORATOR_NAME", 0);
  m_Comms.Register("NAV_X", 0);
  m_Comms.Register("NAV_Y", 0);
  m_Comms.Register("NAV_DEPTH", 0);
  if (targ_name != "Nobody"){
    m_Comms.Register(targ_name+"_NAV_X", 0);
    m_Comms.Register(targ_name+"_NAV_Y", 0);
    m_Comms.Register(targ_name+"_NAV_DEPTH", 0);
    m_Comms.Register(targ_name+"_HEADING", 0);
    m_Comms.Register(targ_name+"_SPEED", 0);
  }
}

