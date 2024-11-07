// print the file contents upside down
// then print the largest line

#include <stdio.h>
#define ERROR -1

//reverse file contents
void reverse(FILE *fp){
    
}





int main(int argc, char **argv) {
    //check for arguments
    if (argc < 2){
        perror("PROVIDE A FILE NAME AS AN ARGUMENT");
        return ERROR;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("FILE NON EXISTENT!!");
        return ERROR;
    }

    reverse(file);
    fclose(file);
    file = NULL;
    return 0;
}