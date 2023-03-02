# Room Unit Firmware
This folder contains the code for the control of a single unit. The control is done through a MCU (ESP8266) that sends the appropriate IR commands based on the received inputs.

The following commands are available:

- AIR_IN_HIGH: turn on the fan to pull air inside of the room with high speed
- AIR_IN_LOW: turn on the fan to pull air inside of the room with low speed
- AIR_OUT_HIGH: turn on the fan to push air outside of the room with high speed
- AIR_OUT_LOW: turn on the fan to push air outside of the room with low speed
- AUTO: in automatic mode, the fan works in automatic way to keep the inside humidity to the target level
- FAN_LOW: constant in-and-out with low speed
- FAN_MID: constant in-and-out with medium speed
- FAN_HIGH: constant in-and-out with high speed
- HUM_LOW: when in AUTO or SURVEILLANCE mode, set target humidity to 40\%
- HUM_MID: when in AUTO or SURVEILLANCE mode, set target humidity to 55\%
- HUM_HIGH: when in AUTO or SURVEILLANCE mode, set target humidity to 75\%
- SURVEILLANCE: when in surveillance mode, the fan works only if the sensed humidity is above the target value (either HUM_LOW, HUM_MID, or HUM_HIGH)

| NEC     | Description |
| ----------- | ----------- |
| 0x42BD1BE4  | AIR_IN_HIGH       |
| Paragraph   | AIR_IN_LOW        |