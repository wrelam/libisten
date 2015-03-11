/*******************************************************************************
    @file   libisten.c
*//**
    Implementation of the isten library.
*******************************************************************************/
#include "libisten.h"

/*******************************************************************************
    isten
*//**
    Determines whether a number is equal to ten or not.
    @param  num The number to be checked

    @return Truth value for whether or not the number was equal to ten
    @retval 1   The number is equal to ten
    @retval 0   The number is not equal to ten
*******************************************************************************/
int
isten(long double num)
{
    int ret = 0;

    if (((long double) 10) == num)
    {
        ret = 1;
    }
    else
    {
        ret = 0;
    }

#ifdef DEBUG
        printf("%d is %sequal to ten.\n", num, (ret) ? "" : "not ");
#endif

    return ret;
}
