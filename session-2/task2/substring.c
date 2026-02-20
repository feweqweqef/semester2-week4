/*
 * Find a substring within a given string
 */
#include <stdio.h>
#include <string.h>

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

int main (void) {
    char str1[100] = "The quck brown fox jumped over the lazy dog";
    char str2[100] = "ump";
    char *ptr;
    ptr = strstr(str1, str2);
    printf("The substring is located at: %p\n", ptr);
    printf("The substring is: %s\n", ptr);
    printf("The first character of the substring is: %c\n", *ptr);
    return 0;

}
