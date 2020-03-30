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

Mapper.hpp
libmapper interface

*/

#pragma once

#include "gl-app/GestureRecorder.hpp"
#include "gl-app/Sequencer.hpp"
#include "gl-app/Pattern.hpp"
#include "mapper/mapper.h"
#include "gl-util/Util.hpp"

namespace gl {
class Mapper {
 public:
  Mapper(Pattern* ptn, Sequencer* sequencer);

  void update();

 private:
  Pattern* ptn_;

  Sequencer* sequencer_;

  mapper_device dev_;

  static void sig_pitch_handler(mapper_signal sig, mapper_id instance,
                                const void* value, int count,
                                mapper_timetag_t* tt);

  static void sig_pressure_handler(mapper_signal sig, mapper_id instance,
                                   const void* value, int count,
                                   mapper_timetag_t* tt);

  static void sig_timbre_handler(mapper_signal sig, mapper_id instance,
                                 const void* value, int count,
                                 mapper_timetag_t* tt);

  static void sig_mod_pitch_handler(mapper_signal sig, mapper_id instance,
                                    const void* value, int count,
                                    mapper_timetag_t* tt);

  static void sig_mod_pressure_handler(mapper_signal sig, mapper_id instance,
                                       const void* value, int count,
                                       mapper_timetag_t* tt);

  static void sig_mod_timbre_handler(mapper_signal sig, mapper_id instance,
                                     const void* value, int count,
                                     mapper_timetag_t* tt);

  static void sig_mod_handler(mapper_signal sig, mapper_id instance,
                              const void* value, int count,
                              mapper_timetag_t* tt);

  static void sig_record_handler(mapper_signal sig, mapper_id instance,
                                 const void* value, int count,
                                 mapper_timetag_t* tt);

  static void sig_tempo_handler(mapper_signal sig, mapper_id instance,
                                const void* value, int count,
                                mapper_timetag_t* tt);
};
}  // namespace gl
