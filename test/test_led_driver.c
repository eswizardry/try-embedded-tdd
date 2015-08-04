/*
* @Author: mcsbanch
* @Date:   2015-08-04 10:59:37
* @Last Modified by:   mcsbanch
* @Last Modified time: 2015-08-04 13:04:46
*/

#include "unity.h"
#include "led_driver.h"

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
    TEST_ASSERT_EQUAL(0, ledPort);
}

void test_LedOnAfterTurnOn(void)
{
    unsigned char ledPort;

    ledPort = 0xFF;
    ledDeriver_TurnOn(&ledPort);
    TEST_ASSERT_EQUAL(1, ledPort);
}


void test_LedOffAfterTurnOff(void)
{
    unsigned char ledPort;

    ledPort = 0xFF;
    ledDeriver_TurnOff(&ledPort);
    TEST_ASSERT_EQUAL(0, ledPort);
}

