//Challenge 129
//write a program that reates a struct ptr and passes it to a fun
//the fun should take a str ptr of type item as param
//should read from usr the prod name, price and qty
//the data read should be stored in the passed in struct to the fun
//
//another func prinitem that does that and takes as a par a struct ptr item
//
//main should declare and item and a ptr to it. allocate mem for the itemname
#include <stdio.h>
#include <stdlib.h>

struct item {
	char *itemName;
	int quantity;
	float price;
	float amount;
};

void readItem(struct item *buf) {
	printf("Item Name: ");
	scanf("%s", buf->itemName);
	printf("How many? ");
	scanf("%d", &(buf->quantity));
	printf("What's the price? USD$ ");
	scanf("%f", &(buf->price));
	buf->amount = (float)((buf->price) * (buf->quantity));
	return;
}

void printItem(struct item const *buf) {
	printf("Your are taking %d of item %s\n", buf->quantity, buf->itemName);
	printf("Each having a price of USD$%.2f\n", buf->price);
	printf("For a grand total of USD$%.2f\n", buf->amount);
	return;
}

int main() {
	puts("Challenge 129: struct, pointers and functions");
	struct item it; //create struct
	struct item *pit = &it;	 //pointer
	it.itemName = (char*) calloc(25, sizeof(char)); //alloc mem
	

	readItem(pit);
	printf("\n");
	printItem(pit);
	free(it.itemName);
	return 0;
}

