#include <gtest/gtest.h>
#include "string.h"

TEST(String_Length,Normal)
{	
	char string1[]="test";
	char string2[]="text with spaces";	
	char string3[]="   ";
	char string4[]="";
	
    EXPECT_EQ(4,my_strlen(string1));	
    EXPECT_EQ(16,my_strlen(string2));	
    EXPECT_EQ(3,my_strlen(string3));	
    EXPECT_EQ(0,my_strlen(string4));	
}

TEST(String_Length,Scandinavian)
{	
	char string1[]="ÅÄÖÆØ";
	
    EXPECT_EQ(5,my_strlen(string1));
}

TEST(String_Length,Special)
{	
	char string1[]="\0";
	char string2[]="123\0";
	char string3[]="\0d";
	char string4[]="\123";
	
    EXPECT_EQ(0,my_strlen(string1));
    EXPECT_EQ(3,my_strlen(string2));
    EXPECT_EQ(0,my_strlen(string3));
    EXPECT_EQ(1,my_strlen(string4));
	
}

TEST(String_Copy,Normal)
{	
	char stringA[100]="";
	char stringB[100]="";
	
	strcpy(stringA, "aaa");
	mystrcpy(stringA,stringB);
	
    ASSERT_STREQ(stringB,stringA);
}

TEST(String_Compare,Same)
{	
	char stringA[100]="";
	char stringB[100]="";
	
	strcpy(stringA, "aaa");
	strcpy(stringB, "aaa");
	
    EXPECT_EQ(0,mystrcmp(stringA,stringB));
}

TEST(String_Compare,different)
{	
	char stringA[100]="";
	char stringB[100]="";
	
	strcpy(stringA, "a");
	strcpy(stringB, "b");
    EXPECT_EQ(mystrcmp(stringA,stringB),1);
	
	stpcpy(stringA, "ab@");
	stpcpy(stringA, "aba");
    EXPECT_EQ(mystrcmp(stringA,stringB),1);	
	
	stpcpy(stringA, "aabbcc");
	stpcpy(stringA, "aab");
    EXPECT_EQ(mystrcmp(stringA,stringB),1);	
	
}

TEST(String2Upper,Normal)
{	
	char stringA[100]="";
	
	strcpy(stringA, "a");
    EXPECT_EQ(str2upper(stringA),1);
	
	strcpy(stringA, "aAaaAa");
    EXPECT_EQ(str2upper(stringA),4);	

	strcpy(stringA, "AAAAAA");
    EXPECT_EQ(str2upper(stringA),0);	
}

TEST(String2Lower,Normal)
{	
	char stringA[100]="";
	
	strcpy(stringA, "a");
    EXPECT_EQ(str2lower_(stringA),0);
	
	strcpy(stringA, "aAaaAa");
    EXPECT_EQ(str2lower_(stringA),2);	

	strcpy(stringA, "AAAAAA");
    EXPECT_EQ(str2lower_(stringA),6);	
}

TEST(StripNumbers,Normal)
{	
	char stringA[100]="";
		
	strcpy(stringA,"a5");
	ASSERT_EQ(str_strip_numbers((unsigned char *)stringA),1);

	strcpy(stringA,"a5gg6336");
	ASSERT_EQ(str_strip_numbers((unsigned char *)stringA),3);
}

TEST(DuplicateString,Normal)
{	
	char stringA[100]="";
	char* duplicate;
		
	strcpy(stringA,"jepulis jep!");
	
	duplicate = strdupl(stringA);

	ASSERT_EQ(duplicate,stringA);
	ASSERT_STREQ(duplicate,stringA); 
}



