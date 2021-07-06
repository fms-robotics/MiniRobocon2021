#pragma once

#include <PID.h>

#include "hardware/MotorLimited.h"

namespace hardware {

class Mecanum : public PID {
 private:
  bool m_isEnabled = true;
  bool m_isGyroEnabled = false;

  MotorLimited *const m_wheelFL;
  MotorLimited *const m_wheelFR;
  MotorLimited *const m_wheelBL;
  MotorLimited *const m_wheelBR;

  double m_speed;
  double m_direction;
  double m_rotation;
  int16_t m_rotationSpeedDiff;
  double m_rotationOffset;

 public:
  Mecanum(MotorLimited *const wheelFL, MotorLimited *const wheelFR,
          MotorLimited *const wheelBL, MotorLimited *const wheelBR);

  void update();

  void stop();

  void findRotationOffset();

  void setSpeed(const double speed);
  void setDirection(const double direction);
  void setRotationSpeedDiff(const int16_t rotationSpeedDiff);

  double getRotation() const;

  void setTarget(double rotationTarget);

  void getMotorsSpeeds(int16_t &wheelFLSpeed, int16_t &wheelFRSpeed,
                       int16_t &wheelBLSpeed, int16_t &wheelBRSpeed) const;
  void setMotorsSpeeds();
  void setMotorsSpeeds(const int16_t wheelFLSpeed, const int16_t wheelFRSpeed,
                       const int16_t wheelBLSpeed, const int16_t wheelBRSpeed);

  bool isEnabled() const;
  void setIsEnabled(const bool isEnabled);

  bool isGyroEnabled() const;
  void setIsGyroEnabled(const bool isGyroEnabled);

 protected:
  double calculateError(double reading);
};

}  // namespace hardware