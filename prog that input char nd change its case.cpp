/*Name:sana javed
Roll #113
 program that input character and change its case.*/
#include<stdio.h>
#include<conio.h>
main(){
	char ch;
	printf("enter a character");
ch=getchar();
	if(ch>=65&&ch<=90){
		ch=ch+32;
		putchar(ch);
	}
	else
	{
		ch=ch-32;
		putchar(ch);
	}
	getch();
}
