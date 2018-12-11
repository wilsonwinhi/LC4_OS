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

int main() {
    
    // test of strrev
    char rev_string[50];
    my_strcpy(rev_string, "Tom");
    char* revString = my_strrev(rev_string);
    printf("%s \n", revString);
    char case_string[50];
    my_strcpy(case_string, "Tom");
    char* caseString = my_strccase(case_string);
    printf("%s \n", caseString);
	return (0) ;

}
