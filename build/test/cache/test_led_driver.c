#include "led_driver.h"
#include "unity.h"
















void setUp(void)

{

}



void tearDown(void)

{

}



void test_LedOffAfterInitial(void)

{

    unsigned char ledPort;



    ledPort = 0xFF;

    ledDeriver_Initial(&ledPort);

    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ledPort)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

}



void test_LedOnAfterTurnOn(void)

{

    unsigned char ledPort;



    ledPort = 0xFF;

    ledDeriver_TurnOn(&ledPort);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ledPort)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

}





void test_LedOffAfterTurnOff(void)

{

    unsigned char ledPort;



    ledPort = 0xFF;

    ledDeriver_TurnOff(&ledPort);

    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ledPort)), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

}
