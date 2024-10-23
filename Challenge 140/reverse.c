//Challenge 140 prinnt a file content in reverse order
//use fseek to seek eof
//use ftell to get pos of file pointer
//output is the file in reverse order

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "cortez.txt"

int main() {
	FILE *fp = fopen(FILENAME, "r");
	//check for null
	if(fp == NULL){
		perror("ERROR OPENING FILE");
		return -1;
	}
	//move to end of file
	/* printf("current pos %ld \n", ftell(fp));
	printf("%c", fgetc(fp));
	printf("\ncurrent pos %ld \n", ftell(fp)); */
	fseek(fp, 0, SEEK_END);
	int len = ftell(fp); //get len
	
 	for(int i = 1; i<=len ; i++) {
		fseek(fp, -i, SEEK_END);//first move -1 -2 -3 -4... -len
		printf("%c", fgetc(fp));
		//-len is the first char
	}

	//this took me an awkardly longer time that i thought
	puts("\nPrinted file in reverse order");
	
	fclose(fp);
	fp = NULL;
	return 0;
}