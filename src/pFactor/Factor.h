/************************************************************/
/*    NAME: ABelani                                              */
/*    ORGN: MIT                                             */
/*    FILE: Factor.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef Factor_HEADER
#define Factor_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include <stdint.h>
#include <vector>

using namespace std;

typedef vector<unsigned long int> intvec;

class Factor : public CMOOSApp
{
 public:
   Factor();
   ~Factor();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();
   bool isPrime(unsigned long int val);
   
 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
   
   int input_number;
   int output_number;
   vector<unsigned long int> primes;
   vector<int> seq_number;
   vector<float> starttime;
   vector<unsigned long int> lstchck;
   vector<intvec> factors;
   
   
};

#endif 
