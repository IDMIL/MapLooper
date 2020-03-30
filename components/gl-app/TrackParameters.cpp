/*

          ___  
         (   ) 
  .--.    | |  
 /    \   | |  
;  ,-. '  | |  
| |  | |  | |  
| |  | |  | |  
| |  | |  | |  
| '  | |  | |  
'  `-' |  | |  
 `.__. | (___) 
 ( `-' ;       
  `.__.        

Gesture Looper
(c) Mathias Bredholt 2020

*-0-*-0-*-0-*-0-*-0-*-0-*-0-*-0-*-0-*

TrackParameters.cpp
Class to represent the parameters on a Track

*/

#include "gl-app/TrackParameters.hpp"

namespace gl {
bool TrackParameters::set_param_relative(param_name_t name, int val) {
  return false;
}

void TrackParameters::set_param(param_name_t name, int val) {
}

void TrackParameters::clear_param(param_name_t name) {
  switch (name) {
    case STEPS:
      params[name].set(16);
      break;
    case VELOCITY:
      params[name].set(100);
      break;
    case SUSTAIN:
      params[name].set(127);
      break;
    case DIVISION:
      params[name].set(3);
      break;
    default:
      break;
  }
}
}  // namespace gl
