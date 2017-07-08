/*----------------------------------------------------------------------*
 * Example sketch for Arduino ArduBoost Library by M. Hamit YANIK       *
 *                                                                      *
 * Buy here:                                                            *
 * https://www.tindie.com/stores/iohippo/                               *
 *                                                                      *
 * This work is licensed under the Creative Commons Attribution-        *
 * ShareAlike 3.0 Unported License. To view a copy of this license,     *
 * visit http://creativecommons.org/licenses/by-sa/3.0/ or send a       *
 * letter to Creative Commons, 171 Second Street, Suite 300,            *
 * San Francisco, California, 94105, USA.                               *
 *----------------------------------------------------------------------*/

#include <ArduBoost.h>        // https://github.com/hamityanik/ArduBoost
                              // https://www.tindie.com/products/iohippo/arduboos-lipo-arduino-battery-and-charging-addon/

ArduBoost arduboost;

void setup(void)
{
  Serial.begin(9600);
}

void loop(void)
{
  Serial.print("Battery empty: ");
  Serial.print(arduboost.isBattEmpty()); // If battery voltage below 3.2 volts

  Serial.print(" Charging status: ");
  Serial.println(arduboost.isBattCharging());
  delay(100);
}
