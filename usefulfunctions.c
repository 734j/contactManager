#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contactmanager.h"

char rm_newline (char nlstring[]) {

    if ((strlen(nlstring) > 0) && (nlstring[strlen(nlstring) - 1] == '\n')) {
        nlstring[strlen(nlstring) - 1] = '\0';
    }

    return EXIT_SUCCESS;
}

void fix_overflow(char arr[], int len) {
    
    // IF THE ARRAY IS [100] THEN DO PUT 100. NOT 99. 

    int count = 0;
    for (int j = 0; j < len ; j++) {
        if (arr[j] != '\n') {
            count +=1;
        }
    }

    //printf("%d\n", count);
    if (count == len) {
        int c;
        while ((c = getchar() != '\n' && c != EOF)) {}
    }

    /* THIS IS THE CODE I ORIGINALLY FIXED MY ISSUE WITH. I AM KEEPING IT HERE IN CASE ANYTHING GOES WRONG. 
        for (int j = 0; j < 100 ; j++) {
            if (name[j] != '\n') {
                count +=1;
            }
        }

        printf("%d\n", count);
        if (count == 100) {
            stdin_flush();
        }
    */ 
       
}

int flagchk (int l_flag, int n_flag, int d_flag, int h_flag, int L_flag) {
    
    if (l_flag+n_flag+d_flag+h_flag+L_flag >= 2) {
        fprintf(stderr, "Error: Options -h, -n, -d, -l, -L cannot be used together.\n");
        exit(1);

    }
    return EXIT_SUCCESS;
}