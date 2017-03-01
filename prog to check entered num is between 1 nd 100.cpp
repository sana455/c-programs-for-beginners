/*Name:sana javed
Roll #113
program to check whether entered number is between 1 and 100.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>=1&&n<=100){
		printf("%d is between 1 and 100",n);
	}
	else
	printf("%d is not between 1 and 100",n);
	getch();
}
