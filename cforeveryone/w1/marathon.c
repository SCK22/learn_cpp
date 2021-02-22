/*
 * The distance of marathon in kilometers
 * Created Date: Monday, February 22nd 2021, 9:22:12 pm
 * Author: Chaithanya Kumar
 * Copyright (c) 2021 Your Company
 */

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;
    kilometers = 1.609 *(miles + yards /1760.0);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}