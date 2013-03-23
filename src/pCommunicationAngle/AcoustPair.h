/*************************************/
//       NAME: ABelani
//       ORGN: MIT
//       File: AcoustPair.h
//       Date: 02/24/2013

/*  Creates a model of an environment with
a linear sound speed gradient from the 
surface to a certain water depth. Populates
env with a source (src) and a target(targ),
and allows for the calculation of appropriate
position and aim to communicate acoustically.*/
/************************************/

#ifndef AcoustPair_HEADER
#define AcoustPair_HEADER

#include <string>
#include <vector>

class AcoustPair 
{  
 private:
  
  // Vehicle variables
  double m_src_x;
  double m_src_y;
  double m_src_d;
  double m_targ_x;
  double m_targ_y;
  double m_targ_d;
  double m_targ_h;
  double m_targ_s;
  
  // Environment Variables
  double m_env_d;
  double m_C_0;
  double m_G_0;

  // Output
  double m_init_angle;
  
  // state
  bool m_set;
  
 public:
  //Constructor
  AcoustPair(){  m_src_x = 0.0; m_src_y = 0.0;  m_src_d = 0.0;  m_targ_x = 0.0;  m_targ_y = 0.0;  m_targ_d = 0.0;  m_targ_h = 0.0;  m_targ_s = 0.0;}

  
  double get_radius();
  bool isPairSet();
  
  // path functions
  bool exists_path();
  double beam_angle();
  double closest_path();


  // setting and getting source and target positions
  bool set_src_x(double inx) {m_src_x=inx;return(true);}
  bool set_src_y(double iny) {m_src_y=iny;return(true);}
  bool set_src_d(double ind) {m_src_d=ind;return(true);}

  bool set_targ_x(double inx) {m_targ_x=inx;return(true);}
  bool set_targ_y(double iny) {m_targ_y=iny;return(true);}
  bool set_targ_d(double ind) {m_targ_d=ind;return(true);}
  bool set_targ_heading(double inh) {m_targ_h=inh;return(true);}
  bool set_targ_speed(double ins) {m_targ_s=ins;return(true);}

  // setting and getting the environment parameters
  bool set_surface_c(double C_0);
  bool set_grad_c(double G_0);
  bool set_water_depth(double dep);

};


#endif
