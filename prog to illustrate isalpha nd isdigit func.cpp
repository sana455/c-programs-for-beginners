/*Name:sana javed
Roll #113
 program to illustrate isalpha and isdigit functions.*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(isalpha(ch)){
		printf("%c is an alphabet",ch);
	}
	else if(isdigit(ch)){
		printf("%c is a digit",ch);
	}
	else
	printf("invalid");
	getch();
}
