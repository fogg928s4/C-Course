//Challenge 89
//Understanding String functions
//display a string in reverse order with kb input and strlen
//sorts the strings of an array with bbl sort (use strcmp, strcpy)
//(input how many strs, and inputs that amount and compares)

#include <stdio.h>
#include <string.h>

void reverseStr() {
	//original string
	char str[50];
	printf("Enter the string to be reversed: ");
	scanf("%s", str);
	puts(str);
	//reversed string
	int length = strlen(str); //length of the string
	//the reversed string with one more for \0
	//the solutoon provided only printed each char but i wanted to store them just bc
	char rev[length + 1];
	rev[length] = '\0';
	for(int i = 0; i < length; i++) {
		rev[length - i - 1] = str[i];
	}
	//outputs the final string
	puts("The reversed string is:");
	puts(rev);

}


//bubble sort
 void bubbleSort(char arr[][50], int n) {
	 for (int i = 0; i < n - 1; i++) {
		for(int j=0; j < n - i -1; j++) {
			if(strcmp(arr[j], arr[j+ 1]) > 0) {
				char temp[50];
				strcpy(temp,arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], temp);
			}
		}
	}
}


void sortString() {
	int n;
	printf("Enter the amount of string: ");
	scanf("%d", &n);
	char arr[n][50]; //matrix of strings of size specified
	puts("Enter each string");
	for(int i = 0; i < n; i++) {
		printf("String #%d: ", i + 1);
		scanf("%s", arr[i]);
	}
	bubbleSort(arr,  n);
	puts("The ordered strings are: ");
	for(int i = 0; i < n; i++) {
		puts(arr[i]);
	}
}

//menu for redirecting to each function
void menu() {
	puts("Challenge 89: string functions");
	puts("1 - Reverse a string");
	puts("2 - Sort a string");
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice) {
		case 1:
			reverseStr();
			break;
		case 2:
			sortString();
			break;
		default:
			puts("Invalid option!");
			menu();
			break;
	}
}
//main function
int main() {
	menu();
	return 0;
}
