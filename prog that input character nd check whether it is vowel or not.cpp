/*Name:sana javed
Roll #113
 program that input a number from user and verifies whether it is vowel or not.*/
#include<stdio.h>
#include<conio.h>
main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch=='A'|ch=='a'|ch=='E'|ch=='e'|ch=='I'|ch=='i'|ch=='O'|ch=='o'|ch=='U'|ch=='u')
	{
		printf("your entered character %c is vowel",ch);
	}
	else
	printf("your entered character %c is consonant",ch);
	getch();
}
	
	
	
	
	
