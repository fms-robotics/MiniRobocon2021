#pragma once

#define SENSOR_L1 0
#define SENSOR_L2 1
#define SENSOR_R1 2
#define SENSOR_R2 3
#define SENSOR_F1 4
#define SENSOR_F2 5
#define SENSOR_B1 6
#define SENSOR_B2 7

// Pin Definitions

#define PIN_WHEEL_FL_INA 32
#define PIN_WHEEL_FL_INB 33
#define PIN_WHEEL_FL_PWM 11

#define PIN_WHEEL_FR_INA 30
#define PIN_WHEEL_FR_INB 31
#define PIN_WHEEL_FR_PWM 10

#define PIN_WHEEL_BL_INA 36
#define PIN_WHEEL_BL_INB 37
#define PIN_WHEEL_BL_PWM 5

#define PIN_WHEEL_BR_INA 34
#define PIN_WHEEL_BR_INB 35
#define PIN_WHEEL_BR_PWM 4

#define PIN_PUTTING_LEFT_UPPER 3
#define PIN_PUTTING_LEFT_LOWER 2

#define PIN_PUTTING_RIGHT_UPPER A9
#define PIN_PUTTING_RIGHT_LOWER A8

#define PIN_ENCODER_X_CHA 18  // INT3, PD3
#define PIN_ENCODER_X_CHB 19  // INT2, PD2

#define PIN_ENCODER_Y_CHA 14  // PCINT10, PJ1
#define PIN_ENCODER_Y_CHB 15  // PCINT9, PJ0

#define PIN_BALL_HITTER_ENCODER_CHA A13  // PCINT21, PK5
#define PIN_BALL_HITTER_ENCODER_CHB A12  // PCINT20, PK4
#define PIN_BALL_HITTER_ENCODER_CHZ A14  // PCINT22, PK6

#define PORT_COLLISION_BUTTONS_PORT PORTA
#define PORT_COLLISION_BUTTONS_DDR DDRA
#define PORT_COLLISION_BUTTONS_PIN PINA

#define PIN_CONTROLLER_JOYSTICK_X A3
#define PIN_CONTROLLER_JOYSTICK_Y A2

#define PIN_CONTROLLER_TURN_LEFT A0
#define PIN_CONTROLLER_TURN_RIGHT A1

#define PORT_CONTROLLER_BUTTONS_PORT PORTL
#define PORT_CONTROLLER_BUTTONS_DDR DDRL
#define PORT_CONTROLLER_BUTTONS_PIN PINL

#define PIN_CONTROLLER_SWITCH_0 38
#define PIN_CONTROLLER_SWITCH_1 39
#define PIN_CONTROLLER_SWITCH_2 40
#define PIN_CONTROLLER_SWITCH_3 41

#define I2C_ADDR_TFMINIS_0 0x10
#define I2C_ADDR_TFMINIS_1 0x11
#define I2C_ADDR_TFMINIS_2 0x12
#define I2C_ADDR_TFMINIS_3 0x13
#define I2C_ADDR_TFMINIS_4 0x14
#define I2C_ADDR_TFMINIS_5 0x15
#define I2C_ADDR_TFMINIS_6 0x16
#define I2C_ADDR_TFMINIS_7 0x17

#define SERIAL_GYROSCOPE Serial2
#define SERIAL_GYROSCOPE_BAUDRATE 9600

// Parameters

#define MECANUM_ROT_PID_KP 500
#define MECANUM_ROT_PID_KI 0
#define MECANUM_ROT_PID_KD 200

#define MECANUM_ROT_DIFF_MIN -510
#define MECANUM_ROT_DIFF_MAX 510
#define MECANUM_ROT_DIFF_PID_MIN -300
#define MECANUM_ROT_DIFF_PID_MAX 300
#define MECANUM_ROT_ALLOWED_ERROR 0.052359878

#define POSITION_CONTROL_PID_KP 0.001
#define POSITION_CONTROL_PID_KI 0
#define POSITION_CONTROL_PID_KD 0
#define POSITION_CONTROL_PID_ALLOWED_ERROR 10  // (Pulses)

#define PUTTING_LEFT_UPPER_STARTING_POS 170
#define PUTTING_LEFT_LOWER_STARTING_POS 168

#define PUTTING_LEFT_UPPER_HOLDING_POS 77
#define PUTTING_LEFT_LOWER_HOLDING_POS 75

#define PUTTING_LEFT_UPPER_PUTTING_POS 170
#define PUTTING_LEFT_LOWER_PUTTING_POS 30

#define PUTTING_RIGHT_UPPER_STARTING_POS 10
#define PUTTING_RIGHT_LOWER_STARTING_POS 0

#define PUTTING_RIGHT_UPPER_HOLDING_POS 100
#define PUTTING_RIGHT_LOWER_HOLDING_POS 90

#define PUTTING_RIGHT_UPPER_PUTTING_POS 10
#define PUTTING_RIGHT_LOWER_PUTTING_POS 135

#define ENCODER_X_MM_PER_PULSE 1
#define ENCODER_Y_MM_PER_PULSE 1

#define CONTROLLER_DEADZONE 20

#define CONTROLLER_JOYSTICK_X_MIN 130
#define CONTROLLER_JOYSTICK_X_MID 492
#define CONTROLLER_JOYSTICK_X_MAX 879

#define CONTROLLER_JOYSTICK_Y_MIN 140
#define CONTROLLER_JOYSTICK_Y_MID 505
#define CONTROLLER_JOYSTICK_Y_MAX 890

#define CONTROLLER_TURN_LEFT_MIN 10
#define CONTROLLER_TURN_LEFT_MAX 1009

#define CONTROLLER_TURN_RIGHT_MIN 10
#define CONTROLLER_TURN_RIGHT_MAX 1009

#define CONTROLLER_BUTTONS_DEBOUNCE_TIME 25

#define CONTROLLER_LCD_NUM_ROWS 4
#define CONTROLLER_LCD_NUM_COLS 20

#define TFMINIS_POLL_INTERVAL 10