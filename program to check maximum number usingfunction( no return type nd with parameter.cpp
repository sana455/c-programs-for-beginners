#include<stdio.h>
#include<conio.h>
void max(int,int);
 main(){
int n1,n2;
printf("enter value for n1");
scanf("%d",&n1);
printf("enter value for n2");
scanf("%d",&n2);
max(n1,n2);
getch();
}
void max(int n1,int n2){
	if(n1>n2){
		printf("maximum number is %d",n1);
	}
	else if(n2>n1)
	printf("maximum number is %d",n2);
	else
	printf("equal numbers");
}
