//Typecasting is a way to temporarily change the datatypes of a variable.
#include<stdio.h>
#include<stdlib.h>

int main()
{

    float avgProfit;
    int priceOfPumpkin = 10;
    int sales = 59;
    int  daysWorked = 7;

    avgProfit = ((float)priceOfPumpkin * (float) sales) / daysWorked;
    printf("Average daily profit: $%.2f", avgProfit);

	return 0;
}