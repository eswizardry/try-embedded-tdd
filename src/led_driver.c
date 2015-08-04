/*
* @Author: mcsbanch
* @Date:   2015-08-04 10:59:37
* @Last Modified by:   mcsbanch
* @Last Modified time: 2015-08-04 13:28:44
*/

#include "led_driver.h"

#ifndef TEST
unsigned char ledPort;

int main(int argc, char const *argv[])
{
    /* code */
    ledDeriver_Initial(&ledPort);
    ledDeriver_TurnOn(&ledPort);
    ledDeriver_TurnOff(&ledPort);
    return 0;
}
#endif

void ledDeriver_Initial(unsigned char  *ledAddress) {
    *ledAddress = 0;
}

void ledDeriver_TurnOn(unsigned char  *ledAddress) {
    *ledAddress = 1;

}

void ledDeriver_TurnOff(unsigned char  *ledAddress) {
    *ledAddress = 0;
}

