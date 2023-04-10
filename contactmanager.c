#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "contactmanager.h"

#define USAGE "Usage: [-h] [-n] [-l] [-d name]\n"  

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
        printf("%s", USAGE);
        h_flag = 1; 
        break;
    case 'n':
        
        printf("Name: \n");
        fgets(name, 99, stdin);
        rm_newline(name);
        printf("Surname: \n");
        fgets(surname, 99, stdin);
        rm_newline(surname);
        printf("E-Mail: \n");
        fgets(email, 99, stdin);
        rm_newline(email);
        printf("Phone Number: \n");
        fgets(phonenum, 99, stdin);
        rm_newline(phonenum);
        printf("Address: \n");
        fgets(address, 99, stdin);
        rm_newline(address);
        printf("Other Info: \n");
        fgets(other_info, 249, stdin);
        rm_newline(other_info);
        
        addcont(name, surname, email, phonenum, address, other_info);

        n_flag = 1;
        break;
    case 'd':
        
        d_flag = 1;
        break;
    case 'l':
        
        l_flag = 1;
        break;
    case 'L':

        L_flag = 1;
        break;
    default: 
        fprintf(stderr, "%s", USAGE);
        return EXIT_FAILURE;
    }
}

if (argc == 1) {
    printf("%s", USAGE);
}

if (l_flag+n_flag+d_flag+h_flag+L_flag >= 2) {
    fprintf(stderr, "Error: Options -h, -n, -d, -l cannot be used together.\n");
    return EXIT_FAILURE;

}

return EXIT_SUCCESS;

}