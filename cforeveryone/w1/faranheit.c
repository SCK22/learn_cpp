/*
Book : C for Everyone 
Homage to K&R - reference
 c = (F -32) /1.8
 * faranheit.c
 * Created Date: Monday, February 22nd 2021, 9:37:17 pm
 * Author: Chaithanya Kumar
 * 
 * Copyright (c) 2021 Your Company
 */

#include <stdio.h>
int main(){
    int faranheit, celsius;
    printf("Please enter faranheit as an integer: ");
    scanf("%d", &faranheit); //using & will look for the address of faranheit
    celsius = (faranheit - 32) /1.8; //note conversion into double
    printf("\n %d faranheit is %d celsius.\n", faranheit, celsius);
    return 0;
}