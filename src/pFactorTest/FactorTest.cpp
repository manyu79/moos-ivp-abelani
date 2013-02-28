/************************************************************/
/*    NAME: ABelani                                              */
/*    ORGN: MIT                                             */
/*    FILE: FactorTest.cpp                                        */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include "MBUtils.h"
#include "FactorTest.h"
#include <iostream>

using namespace std;

//---------------------------------------------------------
// Constructor

FactorTest::FactorTest()
{
  m_iterations = 0;
  m_timewarp   = 1;
  
}

//---------------------------------------------------------
// Destructor

FactorTest::~FactorTest()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool FactorTest::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;
   
  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;
    
    string key = msg.GetKey();
    if(key == "PRIME_RESULT"){
      //cout << "GOT ONE!\n";
      string sval  = msg.GetString(); 
      vector<string> svec = parseString(sval, ',');
      biteString(svec[0] , '=');
      unsigned long int check = strtoul(svec[0].c_str(),NULL,0);
      //cout << "Checking: " << check << "\n";
      biteString(svec[4] , '=');
      vector<string> pvec = parseString(svec[4], ':');
      unsigned long int prod = 1;
      for (int i = 1; i != pvec.size(); i++){
	prod *= strtoul(pvec[i].c_str(),NULL,0);
	//cout << strtoul(pvec[i].c_str(),NULL,0) << "\n";
      }
      //cout << "Product is: " << prod << "\n";
      if (prod == check){
	Notify("PRIME_RESULT_VALID", sval + ",valid=true");
      }
      else{
	Notify("PRIME_RESULT_VALID", sval + ",valid=false");
      } 
    }
  }
	
  return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool FactorTest::OnConnectToServer()
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

bool FactorTest::Iterate()
{
  m_iterations++;
  return(true);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool FactorTest::OnStartUp()
{
  list<string> sParams;
  m_MissionReader.EnableVerbatimQuoting(false);
  if(m_MissionReader.GetConfiguration(GetAppName(), sParams)) {
    list<string>::iterator p;
    for(p=sParams.begin(); p!=sParams.end(); p++) {
      string original_line = *p;
      string param = stripBlankEnds(toupper(biteString(*p, '=')));
      string value = stripBlankEnds(*p);
      
      if(param == "FOO") {
        //handled
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

void FactorTest::RegisterVariables()
{
  m_Comms.Register("PRIME_RESULT", 0);
}

