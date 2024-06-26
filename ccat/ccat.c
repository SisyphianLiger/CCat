#include <stdio.h>
#include <stdlib.h>
#include "helpfnc/string_comp.h"


int main(int argc, char *argv[]) {
    printf("Hello C Cat :D! \n");
    for (int i = 1; i < argc; i++) { 

        // Checking if there is a flag the next vector is less than argc
        if (str_cmp(argv[i], "-p")) {
            if (argc > i + 1) {
                char * output = remove_dash_str(argv[i + 1]);
                printf("Connecting to port %s...\n", output);
                free(output);
            }
            else {
                fprintf(stderr, "Error: -p flag requires a string argument.\n");
                return 1;
            }
        }
        
        // L flag for localhost Listening
        if (str_cmp(argv[i], "-l"))
            printf("Listening for TCP...\n");
        
    }

    printf("C Cat Succesful! \n");
    return 0;
}

