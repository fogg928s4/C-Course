
#include <stdio.h>
#include <stdlib.h>


int main() {
	//array rows are years, cols are rainfall that month
	float rainfall[5][12] = {
		{0.1, 0.0, 0.4, 1.7, 7.6, 10.4, 11.9, 12.5, 13.1, 9.7, 2.6, 0.2},
		{0.2, 0.5, 0.4, 2.1, 7.5, 11.5, 12.0, 10.6, 12.5, 9.9, 2.4, 0.3},
		{0.4, 0.4, 0.5, 1.6, 9.3, 12.2, 13.5, 11.2, 11.1, 8.2, 2.6, 0.2},
		{0.2, 0.8, 0.1, 1.5, 7.2, 10.3, 11.0, 10.4, 10.6, 8.1, 3.0, 0.7},
		{0.8, 0.8, 0.4, 1.9, 7.6, 10.2, 11.9, 13.0, 12.5, 9.7, 2.4, 0.4}
	};
	//a string is nothing but an array of chars
	//each row is a month, the col is the size of the string
	char months[12][4] = { 
		"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"	
	};
	
	int year = 2018;
	
	printf("Rainfall through the years (inches)\n\n\t|");
	
	//draw the table head
	for (int m=0; m<12; m++){
		printf("%s   ", months[m]);
		if(m>=5)
			printf(" ");
		
	}
	printf("TOTAL");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	
	float total = 0.0f; //total rainfall a specific year
	//go through it
	for(int i=0;i < 5; i++) {
		
		total=0; //resets every year
		printf(" %d\t|", year+i);
		for(int j=0; j<12; j++){
			printf(" %2.1f  ", rainfall[i][j]);
			total += rainfall[i][j];
		}
		printf("   %2.1f\n", total);
	}
	printf("\n");
	
	return 0;
}
	