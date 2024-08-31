//ccreate a prog that finds all prime numbers from 3-100
//no input
//output separated by a space all on a single line
//store all on an array
//then print all on a single line
#include <stdio.h>
#include <stdbool.h>

int type;//a composite, less than 0
bool isPrime = 1; //1 is prime, 0 compisite



int main() {
	//declaring array
	//first two get hardcoded
	int primes[50] = {2,3};
	//number that will be tested
	
	int number = 3;
	int i = 2; //for indexing purposes
	for(;number<100;number+=2) {
		//+= lets us skip over even numb
		//lets us go through all numbers less than the number
		for(int test = 2; test<=number; test++) {
			if(test==number) {
				//prime was foundddd
				primes[i] = number;
				i++;
			}
			else if(number % test == 0)
				//if a factor is found,breaks from this inner loop
				break;
		}
		
	}
	
	//prints the primes
	printf("There are %d prime numbers between 1 and 100\n", i);
	for(int j = 0; j<=i; j++) {
		if(primes[j] == 0)
			break;
		else
			printf("%d ", primes[j]);
		
	}
	printf("\n");
	

}

