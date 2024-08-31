//Ch 64, gues the number,
//you will gen a random numerb from 0 to 20
//
//user only from 0-20 
//cold or hot, tell if answ is above or below
//only five tries

#include <stdio.h>

//libraries need
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	//time var
	time_t t;

//	get a randome number
//	this func initializes the seed, if  the seed (arg) is the same 
//	it will always output the same "random int"
	srand((unsigned int) time(&t));
	
	int answ = rand() % 21;
		
//	printf("%d", answ);
	int guess = 1;
	printf("Get ready to guess the number!\n\n");
	int attempts = 1;


	while(attempts <=5 && guess > 0 && guess <= 20) {
		printf("This is your attempt #%d\n", attempts);
		printf("Your guess: ");
		scanf("%d", &guess);
		if(guess == answ) {
			printf("Correct! That's the right answer\n");
			break;
		}
		else if(guess > answ) {
			printf("Sorry, your answer is not correct\n");
			printf("Your guess is actually too high\n\n");
			attempts++;
		}
		else if(guess < answ) {
			printf("Sorry, your answer is not correct\n");
			printf("Your guess is actually too low\n\n");
			attempts++;
		}
		if(attemps ==5)
			printf("So Sorry, the right answer was actually %d", answ);
	}


	return 0;

}
