/*Name:sana javed
Roll #113
program to calculate absolute value.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0){
		n=-n;
		printf("absolute value is %d",n);
	}
	getch();
}
