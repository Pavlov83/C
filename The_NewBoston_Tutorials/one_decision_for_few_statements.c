#include<stdio.h>
#include<stdlib.h>

int main()
{
    int hoursStudied = 60; // 10 or more
    int kidsBeatUp = 0;    //0kids
    
    if( (hoursStudied >= 10) && (kidsBeatUp==0) ){ //both conditions should be true to execute
        printf("You are a good student\n");
    }
    return 0;
}
