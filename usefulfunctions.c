#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contactmanager.h"

char rm_newline (char nlstring[]) {

if ((strlen(nlstring) > 0) && (nlstring[strlen (nlstring) - 1] == '\n')) {
    nlstring[strlen (nlstring) - 1] = '\0';
}

return EXIT_SUCCESS;

}