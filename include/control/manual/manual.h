#pragma once

#include <stdint.h>

namespace control {
namespace manual {

extern bool isManualEnabled;

extern double joystickHeading;
extern double joystickMappedSpeed;

extern int16_t turnMappedRotationSpeedDiff;

void loop();

void setIsManualEnabled(const bool isManualEnabled);

}  // namespace manual
}  // namespace control