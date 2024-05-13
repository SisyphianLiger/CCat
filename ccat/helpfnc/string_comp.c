

/*
 * Shorter modification of str compare so that we can 
 * use it to 
 * */ 
#include <stdio.h>
#include <stdlib.h>

int str_cmp(char * str1, char * str2) {

    int i = 0, j = 0;

    while (str1[i] != '\0') 
        i++;
    
    while (str1[j] != '\0') 
        j++;

    if (i == j) {
        int k = 0;
        for (k = 0; str1[k] != '\0'; k++) {
            if (str1[k] != str2[k])
                return 0;
        }
    }

    return 1;
}


char* remove_dash_str(char * str) {
    
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++);
        
    char * str_ret = malloc(i * sizeof(*str_ret));

    for (j = k = 0; str[j] != '\0'; j++) {
        if (str[j] != '-')
            str_ret[k++] = str[j];
        
    }

    str_ret[k++] = '\0';

    return str_ret;
}
