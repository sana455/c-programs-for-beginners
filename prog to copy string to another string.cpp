#include<stdio.h> 
#include<conio.h>
#include<string.h>
main(){
	char str1[1000],str2[1000];
	printf(" please enter 1st string  ::\n");
	gets(str1);
	printf(" please enter 2nd string  ::\n");
	gets(str2);
    strcpy(str2,str1);
	printf("copied  string is (%s)::",str2);
}
