#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *c);
// Function that receives a string as a parameter and returns the length of that string

void mystrcpy(char *s,char *d);
// Function that will copy the content of string s to string d 
int mystrcmp (char *s, char *d);
// Function that will compare two strings together. Function returns place (n) of first different character 
// -n if s is ordered before in alphabet that d
// 0 if strings are equal
// +n if d is ordered before s 

int str2upper(char *s);
// Converts all small characters to upper case characters in string and returns the number of changed characters

int str2lower_(char *s);
// Converts all capital characters to lower case characters in string. Function returns the number of changed characters

int str_strip_numbers(unsigned char *s);
// removes all occurances of numbers, Function returns current length 

char *strdupl(char *s);
// Creates a duplicate of a string s and returns a pointer to newly created string