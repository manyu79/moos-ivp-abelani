/************************************************************/
/*    NAME: ABelani                                              */
/*    ORGN: MIT                                             */
/*    FILE: CommunicationAngle.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef CommunicationAngle_HEADER
#define CommunicationAngle_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include "AcoustPair.h"
#include <string>

class CommunicationAngle : public CMOOSApp
{
 public:
   CommunicationAngle();
   ~CommunicationAngle();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
   
   std::string my_name;
   std::string targ_name;
   double C_0;
   double G_0;
   double depth_0;
   
   AcoustPair APair;

};

#endif 
