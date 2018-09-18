#include <stdio.h>
#include<stdlib.h>



int main()
{
	char name[12] = "Pavel Pavlov";
	printf("My name is %s \n", name);

	name[2] = 'f';
	printf("My name is %s\n",name);


	//this example shows how we can change an element from character array
	//2 is the third element(0,1,2).		

	char food[] = "tuna";
	printf("The best food ever is %s \n", food);

	strcpy(food, "bacon");
	printf("The best food is %s \n", food);

	return 0;


}