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
	
	int answ; 
		
//	printf("%d", answ);
	int guess;
	
	int attempts;
	
	char cont = 'y';
	
	while (cont == 'y') {
		guess =1; attempts =1;
		
		answ = rand() % 21;//gets a new number with every game
		
		printf("\nGet ready to guess the number!\nGuess the number between 0 and 20\n\n");
		
		for(;attempts <=5; ++attempts) {
			//best way to print plural or singular i love it
			//printf("You have %d tr%s left", numberOfGuesses, numberOfGuess == 1 ? "y" : "ies");
			printf("This is your attempt #%d\n", attempts);
			printf("Your guess: ");
			scanf("%d", &guess);
			
			//to help with guiding guess or if it's right
			if(guess == answ) {
				printf("Correct! That's the right answer\n");
				break;
			}
			else if(guess > answ) {
				printf("Sorry, your answer is not correct\n");
				printf("Your guess is actually too high\n\n");
			}
			else if(guess < answ) {
				printf("Sorry, your answer is not correct\n");
				printf("Your guess is actually too low\n\n");
			}
			
			//if more than 20 or less than 0
			if (guess < 0 || guess > 20) {
				printf("Sorry, but the number has to be between 0 and 20\n\n");
				--attempts;//try again
			}
			
		}
		//if not right answer
		if(attempts ==6)
			printf("So Sorry, the right answer was actually %d\n", answ);
		
		printf("\nWant to play again? y/n: ");
		scanf(" %c", &cont);	

	}
	printf("\nGoodbye! :D\n");
	return 0;

}
