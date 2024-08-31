#include <stdio.h>
#include <stdbool.h>

int type;//a composite, less than 0
bool isPrime = 1; //1 is prime, 0 compisite


void checkPrime(int n) {
	int i = 3; //for iteration

	if(n == 2 || n <=0)
		isPrime = 1;
	else if(n % 2 == 0)
		isPrime = 0;
	else {
		while(isPrime && (i != n))
		{
			isPrime = (n % i == 0) ? 0: 1;
			i++;
		}
	}
}


int main() {
	unsigned int num = 0;
	printf("type a number to check if prime: ");
	scanf("%d", &num);
	checkPrime(num);
	if(isPrime)
		printf("\nThe number %d is prime\n", num);
	else
		printf("\nThe numer %d ain't a prime\n", num);
	/*
	switch (type) {
		case 0:
			printf("\nThe number 2 is the only composite prime\n");
			break;
		case 2:
			printf("\n");
			break;
		case 3:
			printf("\n");
			break;
		case 4:
			printf("\n");
			break;
		case 5:
			printf("\n");
			break;
		case 6:
			printf("\n");
			break;

	}*/
	return 0;
}

