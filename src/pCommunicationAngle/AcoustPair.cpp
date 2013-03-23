/******************************************************/
/*   NAME: ABelani
     ORGN: MIT
     FILE: AcoustPair.cpp
     DATE: 2/27/2013                                  */
/******************************************************/

#include "AcoustPair.h"
#include "MBUtils.h"
#include <math.h>

using namespace std;

// Constructor

double AcoustPair::get_radius()
{
  double r_T;
  double w_T;
  double r_C;
  double w_C;
  double m_p;
  double R;

  r_T = sqrt(pow((m_targ_x-m_src_x),2)+pow((m_targ_y-m_src_y),2));
  w_T = m_targ_d - m_src_d;
  w_C = m_src_d + m_C_0/m_G_0;
  r_C = r_T/2 + ((w_C - (w_T/2))/m_p);
  R   = sqrt( pow(r_C,2) + pow(w_C,2));
  m_init_angle = atan(r_C/w_C);
  
  return(R);
}
