//
//  main.c
//  UserInput
//
//  Created by QA on 26.06.19.
//  Copyright © 2019 Pavel Pavlov. All rights reserved.
//


    //scanf(controlstring,....)
    // To store values the scanf function has to have the addresses of the variables
    //rather than just their variables
    
    // So we will pass the address of the variable(&variable) instead of just the variable
    
    // scanf("%d %d", &i,&j);
    


// Simple Example :


#include <stdio.h>

int main(){
    
    int a,b,c;
    
    printf("\n Please Enter a value");
    scanf("%d", &a);
    printf("\n Please Enter a value");
    scanf("%d", &b);
    c = a + b
    printf("%d + %d = %d" ,a,b,c);
    return 0;
}
    
