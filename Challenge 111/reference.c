//Challenge 111:using pointers as parameteres
//
//write a program that test pass by ref
//1. A function that squares a numb by itself wi a param as int*
//not return any data , just deref the val 
//& print the val of var and pointer passed to function

#include <stdio.h>
#include <stdlib.h>

//square the number
void squareUp(int *n) {
	int temp = *n; //deref
	*n *=temp; //square
	return;
}

int main(int argc, char* argv[]) {
	//i just want to implement arguments
	int number = 0;
	puts("Challenge 111: pointers and functions");
	//there is always at least one arg and its the program name
	if(argc > 1) {
		number = atoi(argv[1]);
		printf("The number is %d\n", number);
	}
	//if no args take the number
	else {
		printf("Enter a number: ");
		scanf("%d", &number);
	}

	squareUp(&number);
	printf("The number squared is: %d\n", number);
	return 0;
}
