//Challenge 135
//a program that convert all chars on file to CAPS
//writes result on a temp file
//then rename tempfile to the og name and rm the temp
//use fgetc, fputc, and rename/remove
//use islower, can conver a char to caps by subs 32
//finally disp conts of og to stdoutput

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



int main() {
	
	char *filename = "song.txt";
	FILE *fog = fopen(filename, "r"); //og file 
	FILE *ftemp = fopen("temp.txt", "w"); //temp file
	
	//check for null
	if (fog ==NULL || ftemp == NULL) {
		perror("ERROR OPENING FILE");
		return -1;
	}
	
	char c; //current char
	//read from file
	puts("Converting file to ALL CAPS...");
	while((c = fgetc(fog)) != EOF) {
		//checkk if lower first
		if(islower((int) c))
			c -= 32; //convert to caps
		
		fputc(c, ftemp);
	}
	
	fclose(fog);
	fclose(ftemp);
	fog = NULL;
	ftemp = NULL;
	
	//mow rename temp file to og
	rename("temp.txt", filename);
	
	//delete temp???
	remove("temp.txt");
	
	//output og in all caps
	fog = fopen(filename, "r");
	
	if (fog == NULL){
		perror("ERROR OPENING FILE");
		return -1;
	}
	//print file contents
	while((c = fgetc(fog)) != EOF) 	
		printf("%c", c);
	
	puts(":D");
	//close it for good
	fclose(fog);
	fog = NULL;
	return 0;
}
