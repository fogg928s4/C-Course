//Challenge 116: Strings and pointers
//write a function that calculates the length of a string
//parameter const char pointer
//can only be done with pointer arithmetic, no strlen
//while looop only,
//substract two pointers
//and return an int as the lenght of the string passed to the function
#include <stdio.h>

int stringLength(const char *str) {
	puts(str);
	const char *temp = str;
	puts(temp);
	//deref temp since its the one incrementing
	while(*temp) {
		++temp;
	}

	return temp - str;

}

int main() {
	char string[100];
	printf("Enter the string to check it's length: ");
	scanf("%s", string);
	printf("The length of the string is %d\n", stringLength(string));
	return 0;

}

