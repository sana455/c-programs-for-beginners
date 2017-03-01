/*Name:sana javed
Roll #113
program to check whether entered num is even or odd.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("enter a num");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is even",n);
	}
	else
	printf("%d is odd",n);
	getch();
}
