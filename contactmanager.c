#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "contactmanager.h"

#define USAGE "Usage: [-h] [-n] [-L] [-l name] [-d name]\n"  


int main(int argc, char *argv[])
{


    char name[100];
    char surname[100];
    char email[100];
    char phonenum[100];
    char address[100];
    char other_info[250];

    int opt, n_flag = 0, d_flag = 0, h_flag = 0, l_flag = 0, L_flag = 0;


    while ((opt = getopt(argc, argv, "hnLl:d:")) != -1) {
        switch (opt) {
        case 'h':
            h_flag = 1;
            flagchk(l_flag, n_flag, d_flag ,h_flag, L_flag);
            printf("%s", USAGE);
            break;
        case 'n':
            n_flag = 1;
            flagchk(l_flag, n_flag, d_flag ,h_flag, L_flag);

            printf("Name: \n");
            fgets(name, 99, stdin);
            fix_overflow(name, 100);
            rm_newline(name);
            
            printf("Surname: \n");
            fgets(surname, 99, stdin);
            fix_overflow(surname, 100);
            rm_newline(surname);

            printf("E-Mail: \n");
            fgets(email, 99, stdin);
            fix_overflow(email, 100);
            rm_newline(email);

            printf("Phone Number: \n");
            fgets(phonenum, 99, stdin);
            fix_overflow(phonenum, 100);
            rm_newline(phonenum);

            printf("Address: \n");
            fgets(address, 99, stdin);
            fix_overflow(address, 100);
            rm_newline(address);

            printf("Other Info: \n");
            fgets(other_info, 249, stdin);
            fix_overflow(other_info, 250);
            rm_newline(other_info);
            
            addcont(name, surname, email, phonenum, address, other_info);

            break;
        case 'd':
            d_flag = 1;
            flagchk(l_flag, n_flag, d_flag ,h_flag, L_flag);
            break;
        case 'l':
            l_flag = 1;
            flagchk(l_flag, n_flag, d_flag ,h_flag, L_flag);
            break;
        case 'L':
            L_flag = 1;
            flagchk(l_flag, n_flag, d_flag ,h_flag, L_flag);
            break;
        default: 
            fprintf(stderr, "%s", USAGE);
            return EXIT_FAILURE;
        }
    }

    if (argc == 1) {
        printf("%s", USAGE);
    }


    return EXIT_SUCCESS;

}