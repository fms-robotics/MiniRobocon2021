# Mini Robocon 2021

This repo contains the code for the Arduino built on the robot, which is participating in the HK Mini Robocon 2021

The project is coded on VSCode with the extension PlatformIO installed.

## Todo

- [x] ~~Implement controller interfaces (switches, LCD)~~
- [ ] Implement interfaces (NeoPixel) & Refactor
- [ ] Implement sensors
  - [x] ~~Collision detection~~
  - [x] ~~Encoders (PCINT, INT)~~
  - [x] ~~TF-Mini~~
- [ ] Implement ball hitting
- [ ] Implement automatic path following
- [ ] ? Separate code for Team A and Team B

## Serial Control Scheme

## LCD Display

```monospace
| -------------------- |
|                      |
|                      |
| Sq:ID                |
| [    State    ] MG__ |
| -------------------- |
```
