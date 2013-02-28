/************************************************************/
/*    NAME: ABelani                                              */
/*    ORGN: MIT                                             */
/*    FILE: Factor.cpp                                        */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include "MBUtils.h"
#include "Factor.h"
#include "stdlib.h"
#include <vector>
#include <cstdlib>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

typedef vector<unsigned long int> intvec;

//---------------------------------------------------------
// Constructor

Factor::Factor()
{
  m_iterations  = 0;
  m_timewarp    = 1;
  input_number  = 1;
  output_number = 1;
}

//---------------------------------------------------------
// Destructor

Factor::~Factor()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool Factor::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;
   
  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;

    string key = msg.GetKey();
    string val = msg.GetString();
    intvec temp_fact;

    if (key == "NUM_VALUE"){

      //cout << "Got a new Number message. \n";

      // Push the value, the input number, and the current time into a vector 
      primes.push_back(strtoul(val.c_str(),NULL,0));
      //cout << "New Number =" + val + "\n";
      temp_fact.push_back(strtoul(val.c_str(),NULL,0));
      seq_number.push_back(input_number);
      starttime.push_back(MOOSTime());
      lstchck.push_back(2);
      // Add those vectors to the working list
      factors.push_back(temp_fact);
      // Next number will get a higher input number
      input_number++;

    }
  }
	
   return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool Factor::OnConnectToServer()
{
   // m_MissionReader.GetConfigurationParam("Name", <string>);
   RegisterVariables();
   return(true);
}

//---------------------------------------------------------
// Procedure: Iterate()

bool Factor::Iterate()
{
  if (factors.empty()){
    //cout << "ALL GONE";
  }
  else{

    //cout << "ITERATING\n";
    
    for(int p = 0 ; p!=factors.size(); p++){
      intvec fact = factors[p];
      
      //cout << p << ": ";
      if (isPrime(fact[0])){ //check if the first factor is prime
	//if it is, then get the corresponding prime variable and output the whole string
	string output = "orig=";
	//cout << "OUTPUTTING\n";
	
	string prime_str = ulintToString(primes[p]);
	string in_num_str = intToString(seq_number[p]);
	string out_num_str = intToString(output_number);
	string time_str = floatToString(MOOSTime() - starttime[p], 2);
	string factor_list = "";
	for(int j = 0; j < fact.size(); j++) 
	  {factor_list = factor_list + ":" + ulintToString(fact[j]);}
	output = output + prime_str + "," 
	  + "received=" + in_num_str + ","
	  + "calculated=" + out_num_str + ","
	  + "solve_time=" + time_str + + ","
	  + "primes=" + factor_list + ","
	  + "username=ABelani";
	
	//remove both elements from their vectors 
	factors.erase(factors.begin()+p);
	primes.erase(primes.begin()+p);
	starttime.erase(starttime.begin()+p);
	seq_number.erase(seq_number.begin()+p);
	lstchck.erase(lstchck.begin()+p);
	
	//output the whole string
	Notify("PRIME_RESULT", output);
	
	//and increment the output number
	output_number++;
	break;
      }
      else { // otherwise continue with the factoring
	//cout << "FACTORING: ";
	int counter = 0;
	for(unsigned long int j = lstchck[p]; j <= primes[p]; j++){
	  if (isPrime(j)){
	    //cout << fact[0] << "\n";
	    while ( fact[0] % j == 0){
	      fact[0] /= j;
	      fact.push_back(j);
	    }
	    lstchck[p] = j;
	    counter++;
	    if (counter >= 50){
	      //cout << "GAVE UP AT: " << lstchck[p] << "\n";
	      break;
	    }
	  }
	}
      }
      factors[p] = fact;
    }
  } 
  m_iterations++;
  return(true);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool Factor::OnStartUp()
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

void Factor::RegisterVariables()
{
  m_Comms.Register("NUM_VALUE", 0);
}

//---------------------------------------------------------
// Procedure: isPrime

bool Factor::isPrime(unsigned long int val)
{
  bool prime = true;
  for (int i = 2; i <= sqrt(val) ; i++){
    if(val % i == 0){
      prime = false;
      break;
    }
  }
  return prime;
}
