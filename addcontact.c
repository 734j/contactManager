#include <stdio.h>
#include <stdlib.h>
#include "contactmanager.h"

char addcont(char name[], char surname[], char email[], char phonenum[], char address[], char other_info[]) {

FILE* file = fopen("contacts.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return EXIT_FAILURE;

}
fprintf(file, "Name: %s\nSurname: %s\nE-mail: %s\nPhone Number: %s\nAddress: %s\nOther Info: %s\n",
            name, surname, email, phonenum, address, other_info);

fclose(file);

return EXIT_SUCCESS;
}