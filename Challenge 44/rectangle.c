//Area of a Rectangle
// 4 vars of type doyuble
// wdith height perimeter area

#include <stdio.h>

double height = 0, width = 0;
double perim = 0, area = 0;


int main() {
	printf("\tCalculate the area and perimeter of a rectangle");
	printf("\nWidth of the rectangle: ");
	scanf("%lf", &width);
	printf("\nHeight of the rectangle: ");
	scanf("%g", &height);

	printf("\nWidth: %lf, Height: %lf", width, height);

	perim = height * 2 + width * 2;
	//perim = 2.0 * (height + width);
	area = height * width;
	
	//results
	printf("\nThe perimeter of the rectangle is: %0.2lf", perim);
	printf("\nThe area of the rectangle is: %0.2lf", area); 

}

