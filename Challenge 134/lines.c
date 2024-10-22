//Challenge 134 findes the total number of lines in a text file
//create a file with several lines of text !!create it first!!
//use fgetc to parse char until hit EOF to increment coun
//output is just number of lines
#include <stdio.h>


int main() {
	int count = 0;
	//open the file
	char *fileName = "somefile.txt";
	FILE *fp = fopen(fileName, "r");

	if (fp == NULL) {
		perror("ERROR OPENING FILE");
		return -1;
	}
	char c; //the current char read

	while((c = fgetc(fp)) != EOF) {
		count += (c == '\n') ? 1: 0;
	}
	count++; 
	//we must add one since the last line doesnt include \n, but an EOF
	
	printf("The total number of lines is %d\n", count);
	//CLOSING FILE
	fclose(fp);
	fp = NULL;
	return 0;
}
