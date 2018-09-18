#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 4 + 2 * 6; // operator precedence makes the multiplication to execute before addition
	printf("Result: %d \n", a);

	return 0;
}