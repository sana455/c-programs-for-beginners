/*Name:sana javed
Roll #113
program to convert positive number into negative and negative into positive.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("enter a num");
	scanf("%d",&n);
	if(n<0){
		n=-n;
		printf("positive number is %d",n);
	}
	else if(n>0){
		n=-n;
		printf("negative number is %d",n);
	}
	else
	printf("invalid input");
	getch();
}
