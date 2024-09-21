// This challenge is meant to understand char arrays and get familiar
// write a function that counts the amount of char in a string
// it should take a char array as parameter (const) & return an int
//
// a funct to conat two string without strcat
// takes 3 params result, str1, str2
// can return void
//
// a third function that compares two strings if they equal and return bool

#include <stdio.h>
#include <stdbool.h>

// function headers
int strLength(const char str[]);
void strConcat(char result[], const char str1[], const char str2[]);
bool strComp(const char str1[], const char str2[]);

int main() {
	printf("Challenge 86\n");
	//just some string for testing
	const char album[] = "space oddity";
	const char artist[] = "Bowie";
	const char song[] = "space oddity";
	char result[50];

	printf("The length of some names: %d\n", strLength("Chaewon Sakura Kazuha"));
	printf("The length of album is: %d\n", strLength(album));

	int compare = strComp(artist, album) ? 1 : 0;
	printf("Comaprison 1: %d \n", compare);

	compare = strComp(song, album) ? 1 : 0;
	printf("Comaprison 2: %d \n", compare);
	
	strConcat(result, album, artist);
	printf("Concat of the concat of album and artis: %s\n", result);
	return 0;
}

// First function for the length
int strLength(const char str[]) {
	int count = 0;
	while(str[count] != '\0'){
		count++;
	}
	return count;
}

// Second fuction that concats two string
void strConcat(char result[], const char str1[], const char str2[]) {
	//char result should be an unintialized value, thus what we append
	// to it here will be reflected in main
	int i, j;
	//appends the first str to result
	for (i = 0; i < strLength(str1); i++) {
		result[i] = str1[i];
	}
	for (j=0; j < strLength(str2); j++) {
		result[i + j] = str2[j];
	}
	// end of string
	result[i+j] = '\0';
}


// Third function that compares two string
bool strComp(const char str1[], const char str2[]) {

	for (int i = 0; i < strLength(str1); i++) {
		if (str1[i] != str2[i])
			return false;
	}
	//if loop is done then they equal
	return true;

}
