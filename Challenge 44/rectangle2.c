//Same as rectangle 1, but takes arguments from the commadn line
//Area of a Rectangle
// 4 vars of type doyuble
// wdith height perimeter area

#include <stdio.h>
#include <stdlib.h>

double height = 0.0, width = 0.0;
double perim = 0.0, area = 0.0;

int main(int argc, char *argv[]) { //*Argv is a string

	printf("\tCalculate the area and perimeter of a rectangle\n");
	height = atoi(argv[1]);
	width = atoi(argv[2]);
	printf("\nWidth: %.2lf, Height: %.2lf", width, height);

	perim = height * 2.0 + width * 2.0;
	//perim = 2.0 * (height + width);
	area = height * width;
	
	//results
	printf("\nThe perimeter of the rectangle is: %.2lf", perim);
	printf("\nThe area of the rectangle is: %.2lf", area); 
	printf("\n");
	return 0;
}

