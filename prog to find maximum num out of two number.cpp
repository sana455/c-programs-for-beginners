/*Name:sana javed
Roll #113
program to find maximum number out of given two numbers.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n1,n2;
	printf("enter a num for n1");
	scanf("%d\n",&n1);
	printf("enter a number for n2");
	scanf("%d\n",&n2);
	if(n1>n2){
		printf("%d is maximum num",n1);
	}
	else
	printf("%d is maximum num",n2);
	getch();
}
