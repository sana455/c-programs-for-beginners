/*Name:sana javed
Roll #113
program to illustrate isupper and islower functions.*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(isupper(ch)){
		printf("%c is upper case letter",ch);
	}
	else if(islower(ch)){
	printf("%c is lower case letter",ch);
	}
	else
	printf("invalid input");
	getch();
}
