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
#ifndef ArduBoost_h
#define ArduBoost_h
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define battEmptyPin MOSI
#define battChargingPin SCK

class ArduBoost
{
    public:
        ArduBoost();
        uint8_t isBattEmpty();
        uint8_t isBattCharging();

      private:
};
#endif
