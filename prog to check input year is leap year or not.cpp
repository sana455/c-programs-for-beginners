/*Name:sana javed
Roll #113
 program to check whether entered year is leap year or not.*/
#include<stdio.h>
#include<conio.h>
main(){
	int year;
	printf("enter any year");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is a leap year",year);
	}
	else
	printf("%d is not a leap year",year);
	getch();
}
