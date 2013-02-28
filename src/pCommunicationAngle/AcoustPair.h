/*************************************
/       NAME: ABelani
/       ORGN: MIT
/       File: AcoustPair.h
/       Date: 02/24/2013

  Creates a model of an environment with
a linear sound speed gradient from the 
surface to a certain water depth. Populates
env with a source (src) and a target(targ),
and allows for the calculation of appropriate
position and aim to communicate acoustically.
/*************************************/

#ifndef AcousticPair_HEADER
#define AcousticPair_HEADER

#include <string>
#include <vector>


class AcousticPair :
{
 public:
  bool AcoustPair();
 
  // setting and getting source and target positions
  bool set_src_x(double inx) {m_src_x=inx;}
  bool set_src_y(double iny) {m_src_y=iny;}
  bool set_src_d(double ind) {m_src_d=ind;}

  bool set_targ_x(double inx) {m_targ_x=inx;}
  bool set_targ_y(double iny) {m_targ_y=inx;}
  bool set_targ_d(double ind) {m_targ_d=inx;}

  double get_radius();
  bool isPairSet();

  // setting and getting the environment parameters
  bool set_surface_c(double C_0);
  bool set_grad_c(double G_0);
  bool set_water_depth(double dep);
  
  // path functions
  bool exists_path();
  double beam_angle();
  double closest_path();
  
 protected:
  
  
 private:
  
  double m_src_x;
  double m_src_y;
  double m_src_d;
  double m_targ_x;
  double m_targ_y;
  double m_targ_d:
  double m_init_angle;
  double m_env_d;
  double m_C_0;
  double m_G_0;
  
}
