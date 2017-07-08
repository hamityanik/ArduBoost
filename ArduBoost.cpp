/*----------------------------------------------------------------------*
 * ArduBoost Library v1.0                                               *
 * M. Hamit YANIK   Jul 2017                                            *
 *                                                                      *
 * This work is licensed under the Creative Commons Attribution-        *
 * ShareAlike 3.0 Unported License. To view a copy of this license,     *
 * visit http://creativecommons.org/licenses/by-sa/3.0/ or send a       *
 * letter to Creative Commons, 171 Second Street, Suite 300,            *
 * San Francisco, California, 94105, USA.                               *
 *----------------------------------------------------------------------*/

#include "ArduBoost.h"

ArduBoost::ArduBoost()
{
    pinMode(battEmptyPin, INPUT);
    pinMode(battChargingPin, INPUT);
}

uint8_t ArduBoost::isBattEmpty(void)
{
    return digitalRead(battEmptyPin) == 0 ? 1 : 0;
}

uint8_t ArduBoost::isBattCharging(void)
{
    return digitalRead(battChargingPin) == 0 ? 1 : 0;
}
