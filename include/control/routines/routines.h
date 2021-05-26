#ifndef CONTROL_ROUTINES_H
#define CONTROL_ROUTINES_H

#include <Arduino.h>

#include "control/routines/Routine.h"

namespace control {
namespace routines {

const RoutineID *const seqList[10] = {nullptr, nullptr, nullptr, nullptr,
                                      nullptr, nullptr, nullptr, nullptr,
                                      nullptr, nullptr};

extern RoutineID runningRoutine;
extern const RoutineID *runningSeqPtr;

void loop();

void runRoutine(const RoutineID &routineID);
void runSeq(const int seqID);

}  // namespace routines
}  // namespace control

#endif  // CONTROL_ROUTINES_H