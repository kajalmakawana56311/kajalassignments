/*
write a C program that takes two strings from the userand concatenates them
using strcat(). Display the concatenated string and its length using strlen(). 
*/

#include<stdio.h>
#include<string.h>

int main(){
	char str1[100],str2[100];
	printf("enter first string:");
	gets(str1);
	
	printf("enter second string:");
	gets(str2);
	
	strcat(str1, str2);
	
	printf("\nConcatenated String:%s",str1);
	printf("\nLength of Concatenated String: %lu", strlen(str1));
	
	return 0;
}

