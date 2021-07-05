#include "control/control.h"

#include "constants.h"
#include "hardware/hardware.h"
#include "control/commands.h"
#include "control/automatic/automatic.h"
#include "control/manual/manual.h"

String control::input = "";

control::Zone control::zone;

void control::init() {
  LOG_INFO("<Control>\tInit Start...");
  hardware::interface::lcd.setCursor(1, 3);
  hardware::interface::lcd.print("Control Init ");

  hardware::interface::lcd.setCursor(18, 3);
  if (digitalRead(PIN_CONTROLLER_SWITCH_1)) {
    zone = Zone::RED;
    hardware::interface::lcd.print("R");
  } else {
    zone = Zone::BLUE;
    hardware::interface::lcd.print("B");
  }

  manual::init();
  automatic::init();
  LOG_INFO("<Control>\tInit Done");
}

void control::loop() {
  if (Serial.available()) {
    char inChar = Serial.read();

    switch (inChar) {
      case '\n':
      case '\r':
        input.trim();
        if (commands::parseInput(input) == -1) {
          LOG_ERROR("Invalid Input: " + input);
        }
        input = "";
        break;

      case '\b':
        input.remove(input.length() - 1);
        break;

      case 'x':
        hardware::stopAll();
        automatic::stop();
        break;

      default:
        input.concat(inChar);
        break;
    }
  }

  hardware::interface::lcd.setCursor(16, 3);
  if (manual::isManualEnabled != hardware::controller::switch3State) {
    manual::setIsManualEnabled(hardware::controller::switch3State);
  }

  if (automatic::isAutomaticEnabled != !hardware::controller::switch3State) {
    automatic::setIsAutomaticEnabled(!hardware::controller::switch3State);
  }

  manual::loop();
  automatic::loop();
}
