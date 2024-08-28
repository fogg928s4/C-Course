#include <stdio.h>
#include <stdbool.h>

/*create an enum named company with values 
 * google, fb, xerox, yahoo, ebay, microsoft
 *
 * then create 3 var assign xerox, google, ebay
 *
 * should output the name of 3 vars with each separated. 
 * answ shoudl be 204*/

enum Company {
	GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };


int main() {
	enum Company print = XEROX, 
		     search = GOOGLE,
		     commerce = EBAY;
	printf("The value of xerox is%d \n", print);
	printf("The value google of %d\n", search);
	printf("The value of ebay is %d \n", commerce);

	return 0; 
}

