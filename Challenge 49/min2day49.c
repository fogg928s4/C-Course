#include <stdio.h>
#include <stdlib.h>

//ask user for number of minutes
//outputs the mins in days and years
//as floats oh no
// double types suggested minutes, years, days, minutes in years
//
float minInYear = 60 * 24 * 365; //525600
float minInDay = 60 * 24;
int minutes;
float days, years;

int main() {
	printf("How many minutes would you like to convert?: ");
	scanf("%d", &minutes); //dont put text in the first arg just the vars to be captured
	days = minutes / minInDay;
	years = minutes / minInYear;

	printf("\nThe number of days is: %f\n", days);
	printf("\nThe number of years is: %f\n", years);
	return 0;

}
