#include <stdio.h>
#include<stdlib.h>

int main()
{
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    
    if(age >= 18){
        printf("You can enter");
    }
    
    if(age < 18){
        printf("Norhing to see here");
    }
    
    
    return 0;
}
