/*
* @Author: mcsbanch
* @Date:   2015-08-04 10:59:37
* @Last Modified by:   mcsbanch
* @Last Modified time: 2015-08-04 13:05:46
*/

#ifndef led_driver_H
#define led_driver_H

void ledDeriver_Initial(unsigned char  *ledAddress);
void ledDeriver_TurnOn(unsigned char  *ledAddress);
void ledDeriver_TurnOff(unsigned char  *ledAddress);

#endif // led_driver_H
