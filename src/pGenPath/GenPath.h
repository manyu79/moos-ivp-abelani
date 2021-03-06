/************************************************************/
/*    NAME:                                                 */
/*    ORGN: MIT                                             */
/*    FILE: GenPath.h                                       */
/*    DATE:                                                 */
/************************************************************/

#ifndef GenPath_HEADER
#define GenPath_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include "XYSegList.h"

class GenPath : public CMOOSApp
{
 public:
   GenPath();
   ~GenPath();

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

   XYSegList my_list;
   unsigned int hit_count;
   std::string vname;
};

#endif 
