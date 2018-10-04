/* The program should create 4 variables of type double
 one variable to stroe the width of rectangle
 one variable to store the height of a rectangle
 one variable to store the perimeter of a rectangle
 one variable to store the area of a rectangle */
#include <stdio.h>
#include<stdlib.h>

int main()
{
   float w,h,perimeter,area;
    
    printf("Enter width value\n");
    scanf("%f",&w);
    printf("Enter height value\n");
    scanf("%f",&h);
    
    area=w*h;
    perimeter = 2 * w + 2 * h;
    
    printf("The area of a rectangle is %.2f\n",area);
    printf("The perimeter of a rectangle is %.2f\n",perimeter);
    
    return 0;
}
