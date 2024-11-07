//write a prog that asks for number to the user and display it on a table.
//first ask user to input the amount of numbers they'll add but it better be less than a MAX

#include <stdio.h>

#define MAX_DEF 1024

int main() {
    puts("Practice 1: A table!");
    int entries = 1;
    do{
        printf("Enter the amount of numbers you'd like to enter (MAX is %d): ", MAX_DEF);
        scanf("%d", &entries);
    } while (entries > MAX_DEF);
    printf("good job!!");
    
    //the array for the table elements
    int tableItems[entries];
    // GET ELEMENTS
    for(int i =0; i < entries; i++){
        printf("Enter the item #%d -> ", i);
        scanf("%d", tableItems+i);
    }
    
     //display the table
    puts("INDEX | ITEM");
    puts("----------------");
    for(int i =0; i < entries; i++){
        printf(" %d      | %d \n", i, *(tableItems+i));
    }
    puts("THE END :D");
    
    return 0;
}