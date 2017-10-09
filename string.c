#include "string.h"

int my_strlen(char *c){
	int l=0;
	while(*(c+l) != '\0'){
		l++;
	}
	return l;
};
// Function that receives a string as a parameter and returns the length of that string

void mystrcpy(char *s,char *d){
	int i=0;
	while(*(s+i) != '\0'){
		if (*(s+i) != '\0'){
			*(d+i) = *(s+i);
		}
		i++;
	};
};
// Function that will copy the content of string s to string d 

int mystrcmp (char *s, char *d){
	int t=0;
	while((s[t]&&d[t])!='\0'){
		if(s[t]!=d[t]){
			if(s[t]>d[t]){
				t--;
			}
			if(s[t]<d[t]){
				t++;
			}
			return t;
		}
		t++;
	}
	return 0;	
};
// Function that will compare two strings together. Function returns place (n) of first different character 
// -n if s is ordered before in alphabet that d
// 0 if strings are equal
// +n if d is ordered before s 

int str2upper(char *s){
	int t=0;
	int c=0;
	while(s[t]!='\0'){
		if(s[t]>='a' && s[t]<='z'){
			s[t]=s[t]-' ';
			c++;
		}
		t++;
	}
	return c;
};
// Converts all small characters to upper case characters in string and returns the number of changed characters

int str2lower_(char *s){
	int t=0;
	int c=0;
	while(s[t]!='\0'){
		if(s[t]<='Z' && s[t]>='A'){
			s[t]=s[t]+' ';
			c++;
		}
		t++;
	};
	return c;
};
// Converts all capital characters to lower case characters in string. Function returns the number of changed characters

int str_strip_numbers(unsigned char *s){
	int t=0;
	int c=0;
	while(s[t]!='\0'){
		if(s[t]>='0' && s[t]<='9'){
			
		}
		else{
			s[c]=s[t];
			c++;
		}
		t++;
	};
	return c;
};
// removes all occurances of numbers, Function returns current length 

char *strdupl(char *s){
	char* t;
	t=(char*)malloc(sizeof(char)*my_strlen(s));
	t=s;
	return t;
};
// Creates a duplicate of a string s and returns a pointer to newly created string