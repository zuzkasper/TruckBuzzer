# TruckBuzzer
An arduino based project still in progress. A buzzer that makes a noise when an old truck is not running but the lights are still on.

I tested this design on a 1985 M1009 CUCV (military version of the 1985 Chevy K5 blazer).
The input signal comes from the ignition pin on the fuse box. 
If the ignition is on, the voltage will be set to high and the buzzer will not buzz.
If the ignition is not on, the voltage will be low alerting the buzzer that the truck was turned off without the lights being turned off.
If the lights are turned off, there will be no power coming to the arduino as both are controlled by the blackout switch.
This way the arduino is only on when the light is on.
