//Challenge 120 Dynamic memory
//write a program where user inputs a string 
//can use scanf or gets (for whitespace)
//the user can enter the limit of the string they enter
//only create a char pointer :(

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	char *str = NULL;
	puts("Challenge 120: Dynamic memory allocation");
	printf("Enter the size of your string: ");
	scanf("%d", &size);
	
	//allocate memory
	str = (char*) malloc(size * sizeof(char));

	//check for failure
	if(!str)
		return 0;

	printf("Now write something nice: ");
	//using gets, has to be used in tandem to scanf
	scanf(" ");
	gets(str);
	
	//print result
	printf("The string you entered was: %s\n", str);
	printf("The size of your string is %d\n", (int) sizeof(str));

	//free
	free(str);

	return 0;
}
