//
//  CentigradeConverter.c
//  C_Hello_World
//
//  Created by MacOS 10.12.4 on 23.03.18 г..
//  Copyright © 2018 г. PPavlov. All rights reserved.
//

#include "CentigradeConverter.h"
#include <stdio.h>

/* print Fahrenheit-Celsius table
     for fahr = 0, 20, .... 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; //lower limit of temp table
    upper = 200; // upper limit
    step = 20;   // step size
    
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
