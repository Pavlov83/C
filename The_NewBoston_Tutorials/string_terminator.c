#include<stdio.h>
#include<stdio.h>

int main()
{
	char name[12]= "Pavel Pavlov"; 
	// we have to declare the length of the character array
	printf("My name is %s \n", name)

	return 0;
}

// in C the strings are not reserving the space for whole strings.The concept is
//that in C we are saving like array of characters.