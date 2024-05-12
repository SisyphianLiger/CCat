

/*
 * Shorter modification of str compare so that we can 
 * use it to 
 * */ 
#include <stdio.h>

int str_cmp(char * str1, char * str2) {
   
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) 
            return 0;
    }
    
    return 1;
}
