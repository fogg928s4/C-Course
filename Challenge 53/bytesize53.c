//displayt the byte size of basic data types supported inc
//byte size of int, char, long, long long, double, long double
//
#include <stdio.h>

int main() {
	printf("The size of int is %zd bytes\n", sizeof(int));
	
	printf("The size of char is %zd bytes\n", sizeof(char));
	printf("The size of long is %zd bytes\n", sizeof(long));
	printf("The size of long longis %zd bytes\n", sizeof(long long));
	printf("The size of float is %zd bytes\n", sizeof(float));
	printf("The size of double is %zd bytes\n", sizeof(double));
	printf("The size of long double is %zd bytes\n", sizeof(long double));
	return 0;

}
