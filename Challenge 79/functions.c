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
float sqrRoot(float n);

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
		case 2:
			printf("Input the number to find the square root of: ");
			scanf("%f", &num0);
			printf("The sqrRoot of %.3f is %.3f\n", absVal(num0), sqrRoot(num0));
			break;
		default:
			printf("\nNot a valid option!\n\n");
			menu();
			break;
	}
}

//takes to args
int findMCD(int a, int b) {
	int temp;
	//this is actually jaseon fedin's answer im legit so impressed
	//loop until b not 0 in which case the temp is 0 thus theyre divisors
	while(b != 0) {
		temp = a % b; 
		a = b; //swaps them
		b =temp; //if find a common divisor, it means temp is 0
	}
	return a;
	
}

float absVal(float number) {
	if(number < 0)
		return number * -1;
	else 
		return number;
}

float sqrRoot(float n) {
	float test = 0;
	const float delta  = 0.001f;
	n = absVal(n);
		
	while((test * test - delta) <= (n-delta)) {
		test+= delta;
	}
	return test;
}

/* int findMCD(int a, int b) {
	printf("a=%d\tb=%d\n",a,b);
	//loop to find the mcd
	while((divisor <= a) || (divisor <= b)) {
		if ((a % divisor == 0) && (b % divisor == 0)) {
			a /= divisor; b /= divisor; 
			mcd *= divisor;
			
		}
		else if ((a % divisor != 0) && (b%divisor == 0)) {
			b /= divisor;
			return mcd;
		}	
		else if ((a % divisor == 0) && (b%divisor != 0)) {
			a /= divisor;
			return mcd;
		}
		else
			divisor++;
	}
	return mcd;
} */
