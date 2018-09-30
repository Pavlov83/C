//format specifiers are used when displaying variables as output
//they specify the type of data of the variable to be displayed


#include <stdio.h>
#include<stdlib.h>


int main(void)
{
	int sum = 89;
	printf("The sum is %d\n", sum);

	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = "W";

	_Bool boolVar = 0;

	printf("integerVar = %i\n", integerVar);
	printf("floatingVar %f\n", floatingVar);
	printf("doubleVar %e\n", doubleVar);
	printf(" charVar %c\n", charVar );

	printf("boolVar = %i\n", boolVar);

	return 0;



}