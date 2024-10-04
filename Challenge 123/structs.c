//Challenge 123
//create a structure and print its conten
//employee structure with 3 members
//declare and initialize the instance of the employee tyoe
//read in a second employee and store it
//
//pritn out contents of each employee
//
#include <stdio.h>

struct employee {
	char name[100];
	int hireDate;
	float salary;
};

int main() {
	//initialize both employees
	struct employee E2;
	
	struct employee E1 = {"Diego Francis", 20240512, 523.14f};

	puts("Challenge 123: Structures\n");
	printf("Type the name of your employee: ");
	scanf(" ");
	gets(E2.name);
	printf("Write the date of hiring (YYYYMMDD): ");
	scanf("%d", &E2.hireDate);
	printf("What's %s's salary?: ", E2.name);
	scanf("%f", &E2.salary);
	
	puts("Data of each employee");
	puts("Employee 1: ");
	printf("%s hired: %d  salary: %.2f\n", E1.name, E1.hireDate, E1.salary);
	puts("Employee 2: ");
	printf("%s hired: %d  salary: %.2f\n", E2.name, E2.hireDate, E2.salary);

}

