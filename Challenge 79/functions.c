//this challenge has you write 3 functs

//I. a func that finds the greatest commond divisor of two non negative ints and return the result GCD or MCD
//II. Write a funct to calculate the absolute val of a number. takes a float
//III. compute the square root of a number and should use func II
//if negative is input it sould return -1.0

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//function headers

void menu();
int findMCD(int a, int b);
float absVal(float number);

int main() { 
	menu();
    return 0;
}

void menu() {
	int choice = 0;
	float num0,num1;
	
	printf("Functions practice: Enter the number of function to test\n");
	printf("0. Find the GCD/MCD of two numbers\n");
	printf("1. Find the Absolute Value of a number\n");
	printf("2. Find the square root of a number\n");
	printf("+++ Your choice: ");
	scanf("%d", &choice);
	switch(choice) {
		//case for mcd
		case 0:
			printf("\nInput the first number: ");
			scanf("%f", &num0);
			printf("Input the second number: ");
			scanf("%f", &num1);
			printf("\nThe mcd is %d\n",findMCD(num0, num1));
			break;
		//case for absolute
		case 1:	
			printf("\nInput the number to find the absolute of: ");
			scanf("%f", &num0);
			printf("The |%0.2f| is %0.2f\n", num0, absVal(num0));
			break;
		default:
			printf("\nNot a valid option!\n\n");
			menu();
			break;
	}
}

int findMCD(int a, int b) {
	//determine the shorter number
	int divisor = 2;
	int mcd = 1;
	
	printf("a=%d\tb=%d\n",a,b);
	
	//loop to find the mcd
	while((divisor <= a) || (divisor <= b)) {
		
		if ((a % divisor == 0) && (b % divisor == 0)) {
			printf("a=%d\tb=%d\t| %d\n",a,b,divisor);
			a /= divisor; b /= divisor; 
			mcd *= divisor;
			
		}
		else if ((a % divisor != 0) && (b%divisor == 0)) {
			printf("a=%d\tb=%d\t| %d\n",a,b,divisor);
			b /= divisor;
			return mcd;
		}	
		else if ((a % divisor == 0) && (b%divisor != 0)) {
			printf("a=%d\tb=%d\t| %d\n",a,b,divisor);
			a /= divisor;
			return mcd;
		}
		else
			divisor++;
	}
	return mcd;
}

float absVal(float number) {
	if(number < 0)
		return number * -1;
	else 
		return number;
}