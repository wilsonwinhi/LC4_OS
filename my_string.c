/**************************************************************
 * file name   : my_string.c                                  *
 * author      : tjf & you                                    *
 * description : this C-file defines the functions previously *
 *               declared in the my_string.h header file      *
 *                                                            *
 *                                                            *
 **************************************************************
 *
 */

#include "my_string.h"
#include <stdio.h>
// strlen functions takes in a pointer to a string and return its length

size_t2 my_strlen  (const char *str) {

	size_t2 len = 0 ;
	while (str[len] != '\0') {  // count up to the first NULL
		len++ ; 
	}
	return (len) ;

}

size_t2 my_strlen2 (const char *str) {

	const char* s;
	for (s = str; *s; ++s) ;
	return (s - str);

}


/* CIT 593 students: TODO: implement the remaining string functions
   that were declared in my_string.h */

char* my_strcpy  (char *dest, const char *src) {
    // copy src to dest
    int i = 0;
    dest[i] = 'a';
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char* my_strcpy2 (char *dest, const char *src) {
    const char* s;
    char* res = dest;
    for (s = src; *s; s++) {
        *dest = *s;
        dest++;
    }
    *dest = '\0';
    return res;
}


// strchr

char* my_strchr  (const char *str, int c) {
    char *s;
    for (s = str; *s; s++) {
        if (*s == c)
            return s;
    }
    return NULL;
}
char* my_strchr2 (const char *str, int c) {
    int i = 0;
    while (str[i] != c) {
        i++;
    }
    char *s = &str[i];
    return s;
}


// strcat
// appends the string pointed to by src to the end of the string pointed to by dest.

char* my_strcat  (char *dest, const char *src) {
    char* s;
    for (s = dest; *s; s++) {
    }
    char* t;
    for (t = src; *t; t++) {
        *s = *t;
        s++;
    }
    return dest;
}
char* my_strcat2 (char *dest, const char *src) {
    char* s;
    for (s = dest; *s; s++) {
    }
    int i = 0;
    while (src[i] != '\0') {
        s[i] = src[i];
        i++;
    }
    s[i] = src[i];
    return dest;
}

// strcmp
// compares the string pointed to, by str1 to the string pointed to by str2.

int strcmp  (const char *str1, const char *str2) {
    char *s1 = str1;
    char *s2 = str2;
    for (; *s1 && *s2; s1++, s2++) {
        if (*s1 > *s2) {
            return 1;
        }
        if (*s1 < *s2)
            return -1;
    }
    if (*s1) {
        return 1;
    }
    if (*s2) 
        return -1;
    return 0;
}
int strcmp2 (const char *str1, const char *str2) {
    size_t2 len1 = my_strlen(str1);
    size_t2 len2 = my_strlen(str2);
    for (int i = 0; i < len1 && i < len2; i++) {
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return -1;
    }
    if (len1 > len2) {
        return 1;
    }
    if (len2 > len1)
        return -1;
    return 0;
}

char* my_strrev(char* str) {
    char* res = str;
    size_t2 len = my_strlen(str);
    int i = 0;
    int j = len - 1;
    while (i < j) {
        char tmp = *str;
        *str = str[j];
        *(str + j) = tmp;
        str++;
        i++;
        j--;
    }
    return res;
}

char* my_strccase(char* str) {
    size_t2 len = my_strlen(str);
    char* res = str;
    for (int i = 0; i < len; i++) {
        char tmp = str[i] - 32;
        // printf("%c \n", tmp);
        if (str[i] - '\0' >= 97 && str[i] - '\0' <= 122) {
            char tmp = str[i] - 32;
            str[i] = tmp;
        } else if (str[i] - '\0' >= 65 && str[i] - '\0' <= 90) {
            char tmp = str[i] + 32;
            str[i] = tmp;
        } 
    }
    return res;
}

char *strtok(char *str, const char *delim) {
    // two pointer to get the token
}