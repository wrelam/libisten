/*******************************************************************************
    @file   libisten_test.c
*//**
    Tests the isten library
*******************************************************************************/
#include <stdio.h>
#include "libisten.h"

int
main(void)
{
    int passT1  = 0;
    int passT2  = 0;
    int t1      = 10;
    int t2      = 12;
    int numPass = 0;
    int totTest = 2;

    if (isten(t1))
    {
        passT1 = 1;
        numPass++;
    }

    if (!isten(t2))
    {
        passT2 = 1;
        numPass++;
    }

    printf("libisten test results:\n");
    printf("%d/%d passed\n", numPass, totTest);

    if (numPass == totTest)
    {
        printf("All tests passed!\n");
    }

    return !(numPass == totTest);
}

