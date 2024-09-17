//write a tic tac toe game on a 3x3
//the grid should be an array of type char
//each elemnt reps a coord on the board
//pvp
//3 funcs at least check for win, drawboard, markboard

#include <stdio.h>
#include <stdbool.h>

//function headers
void markBoard();
void drawBoard(int coord, char turn);
bool checkWin();

//global variable with the squares
char squares[9] = {'1', '2','3','4','5','6','7','8','9'};
bool Player1 = true; //1 true, 2 false

void drawBoard(int coord, char turn) {
	//initializes teh char with the squares
	squares[coord-1] = turn;
	//takes the value that was given
	printf("\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n", squares[0], squares[1], squares[2]);
	printf("________________|_______________|________________\n");  
	printf("\t%c\t|\t%c\t|\t%c\t\n", squares[3], squares[4], squares[5]);
	printf("________________|_______________|________________\n");  
	printf("\t%c\t|\t%c\t|\t%c\t\n", squares[6], squares[7], squares[8]);
	printf("\n");
	//checks if youve won
	if(checkWin())
		printf("Congratulations! Player %d, You won!!!\n", (Player1 ? 2 : 1));
	else
		markBoard();
}

//depending on the player it marks their choice
void markBoard() {
	int choice;
	printf("Turn of player %d\n", (Player1 ? 1 : 2));
	printf("Which box do you choose?: ");
	scanf("%d", &choice);
	//turn around for player 2
	
	if(Player1) {
		Player1 = !Player1;
		drawBoard(choice, 'X');
	}
	else {
		Player1 = !Player1;
		drawBoard(choice, 'O');
	}	
}

//this function checks for a winner
bool checkWin(){
	//a bunch of ifs
	//first check vertical rows
	for(int i = 0; i < 3; i++) {
		if((squares[i] == squares[i+3]) && (squares[i] == squares[i+6]))
			return true;
	}
	//now check horizontal rows
	for(int i = 0; i <=6; i+=3) {
		if((squares[i] == squares[i+1]) && (squares[i] == squares[i+2]))
			return true;
	}
	//now main diagonal
	if((squares[0] == squares[4]) && (squares[0] == squares[8]))
		return true;
	//inverse diagonal
	if((squares[6] == squares[4]) && (squares[2] == squares[4]))
		return true;
	//no winner
	return false;
}

int main() {
	//this will just call the functions
	printf("TIC TAC & TOE\n");
	printf("Player 1 (X)\t Player 2 (O)\n");
	drawBoard(1,'1');

}