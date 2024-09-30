//Challenge 104, pointes basics
//write a program that creates an int var with a val then a pointer to that var
//display the addr, value and what it is pointing to

#include <stdio.h>
int main() {
	//variable and its pointer
	int order = 66;
	int *porder = &order;
	
	//printing
	//printf("\x1b[2J");
	printf("The pointer's address is %p\n", &porder);
	printf("The pointer's stored value is %p\n", porder);
	printf("The pointer is pointing at the value %d\n", *porder);
	return 0;
	
}