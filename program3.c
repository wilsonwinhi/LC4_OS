/**************************************************************
 * file name   : program1.c                                   *
 * author      : tjf & you                                    *
 * description : this C-file tests the functions of the       *
 *               "my_string" library                          *
 *                                                            *
 *                                                            *
 **************************************************************
 *
 */

#include <stdio.h>
#include <string.h>
#include "my_string.h"

int main (int argc, char** argv) {
    int arr[10];
    char str[250];
    int index = 0;
    int index2 = 0;
    printf ("# of arguments passed: %d\n", argc) ;
    
    for (int i=0; i< argc ; i++) {
        int num;
        if (sscanf(argv[i], "%d", &num) > 0) {
            arr[index++] = num;
        } else {
            int len = my_strlen(argv[i]);
            for (int j = 0; j < len; j++) {
                str[index2++] = argv[i][j];
            }
            str[index2++] = ' ';
        }
        printf ( "argv[%d] = %s\n", i, argv[i] ) ;
    }
    str[index2++] = '\0';
    printf("mums: \n");
    for (int i = 0; i < index; i++) {
        printf("%d \n", arr[i]);
    }
    printf("String: \n");
    printf("%s \n", str);
    
    return (0) ;
}