/************************************************************/
/*    NAME:                                               */
/*    ORGN: MIT                                             */
/*    FILE: PointAssign.cpp                                        */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include <unistd.h>
#include "MBUtils.h"
#include "PointAssign.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//---------------------------------------------------------
// Constructor

PointAssign::PointAssign()
{
  m_iterations = 0;
  m_timewarp   = 1;
  v_flag       = false;
  method       = "alternate";
  region_threshold = 0.0;
}

//---------------------------------------------------------
// Destructor

PointAssign::~PointAssign()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool PointAssign::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;
  cout << "GOT MAIL!\n";

  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;

    string key   = msg.GetKey();
    string sval  = msg.GetString(); 

    if (key=="VISIT_POINT"){
      if (sval == "last"){
	Notify("VISIT_POINT_HENRY",sval);
	Notify("VISIT_POINT_GILDA",sval);
      }
      else{
	if (method=="alternate"){
	  if (v_flag) {
	    Notify("VISIT_POINT_HENRY",sval);
	    v_flag = !v_flag;
	  }
	  else{
	    Notify("VISIT_POINT_GILDA",sval);
	    v_flag = !v_flag;
	  }
	}
	else if(method=="ns"){
	  vector<string> svec = parseString(sval, ',');
	  for(int i = 0 ; i<svec.size(); i++){
	    biteString(svec[i], '=');
	  }
	  double x_new = strtod(svec[0].c_str(),NULL);
	  double y_new = strtod(svec[1].c_str(),NULL);
	  if (y_new >= region_threshold) {
	    Notify("VISIT_POINT_HENRY",sval);
	  }
	  else{
	    Notify("VISIT_POINT_GILDA",sval);
	  }
	}
	else if(method=="ew"){
	  vector<string> svec = parseString(sval, ',');
	  for(int i = 0 ; i<svec.size(); i++){
	    biteString(svec[i], '=');
	  }
	  double x_new = strtod(svec[0].c_str(),NULL);
	  double y_new = strtod(svec[1].c_str(),NULL);
	  if (x_new >= region_threshold) {
	    Notify("VISIT_POINT_HENRY",sval);
	  }
	  else{
	    Notify("VISIT_POINT_GILDA",sval);
	  }
	}
      }
    }
    else if (key == "FOOBAR"){
    }
  }
	
   return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool PointAssign::OnConnectToServer()
{
   RegisterVariables();
   cout << "CONNECTED!!\n";
   return(true);
}

//---------------------------------------------------------
// Procedure: Iterate()
//            happens AppTick times per second

bool PointAssign::Iterate()
{
  m_iterations++;
  return(true);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool PointAssign::OnStartUp()
{
    list<string> sParams;
  m_MissionReader.EnableVerbatimQuoting(false);
  if(m_MissionReader.GetConfiguration(GetAppName(), sParams)) {
    list<string>::iterator p;
    for(p=sParams.begin(); p!=sParams.end(); p++) {
      string original_line = *p;
      string param = stripBlankEnds(toupper(biteString(*p, '=')));
      string value = stripBlankEnds(*p);
      
      if(param == "SPLIT_METHOD") {
        method = biteString(value,'=');
	region_threshold = strtod(value.c_str(),NULL);
      }
      else if(param == "BAR") {
        //handled
      }
    }
  }
  
  m_timewarp = GetMOOSTimeWarp();

  RegisterVariables();	
  return(true);
}

//---------------------------------------------------------
// Procedure: RegisterVariables

void PointAssign::RegisterVariables()
{
  m_Comms.Register("VISIT_POINT", 0);
  //  sleep(1);
  //  Notify("POINT_READY","true");
}


