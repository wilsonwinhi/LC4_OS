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

	// a string we will test with
	char my_string [100] = "Tom" ;

	// test of strlen() functions 
	printf ("Sample string: \"%s\" \n", my_string) ;
	printf (" string's length: strlen()     = %lu \n",   strlen  (my_string)) ;
	printf (" string's length: my_strlen()  = %lu \n", my_strlen (my_string)) ;
	printf (" string's length: my_strlen2() = %lu \n", my_strlen2(my_string)) ;

    printf("\n");
    
    // test of strcpy
    const char* src = "CIT593";
    char dest[100];
    my_strcpy(dest, src);
    printf("Sample ssource string: \"%s\" \n", src);
    printf(" result of my_strcpy(): %s \n", dest);
    char dest2[100];
    my_strcpy2(dest2, src);
    printf(" result of my_strcpy2(): %s \n", dest2);
    
    printf("\n");
    
    // test of strchr
    
    const char str[] = "CIT593: best course";
    const char ch = ':';
    char *ret;
    ret = strchr(str, ch);
    printf("String after %c is %s \n", ch, ret);
    
    const char str2[] = "CIT593: best courses::";
    const char ch2 = ':';
    char *ret2;
    ret2 = strchr(str2, ch2);
    printf("String after %c is %s \n", ch2, ret2);
    
    // test of strcat
    char src2[50], dest3[50];

    my_strcpy(src2,  "This is source");
    my_strcpy(dest3, "This is destination"); 
    
    my_strcat(dest3, src2);

    printf("Final destination string : |%s| \n", dest3);
    
    char src3[50], dest4[50];

    my_strcpy(src3,  "This is source");
    my_strcpy(dest4, "This is destination"); 
    
    my_strcat2(dest4, src3);
    printf("Final destination string : |%s| \n", dest4);
    
    // test of strcmp
    char str1[15];
    char str3[15];
    int res;

    my_strcpy(str1, "abcdefh");
    my_strcpy(str3, "abcdefg");
    res = strcmp(str1, str3);

    if(res < 0) {
       printf("str1 is less than str2 \n");
    } else if(res > 0) {
       printf("str2 is less than str1 \n");
    } else {
       printf("str1 is equal to str2 \n");
    }
    
    res = strcmp2(str1, str3);

    if(res < 0) {
       printf("str1 is less than str2 \n");
    } else if(res > 0) {
       printf("str2 is less than str1 \n");
    } else {
       printf("str1 is equal to str2 \n");
    }
    
	return (0) ;

}
