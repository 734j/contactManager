#include <stdio.h>
#include <stdlib.h>
#include "contactmanager.h"

// This function lists the whole contacts file.
void list_all() {

    char ch;

    FILE* file = fopen("contacts.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        
    }
    
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF); {}


    fclose(file);

}