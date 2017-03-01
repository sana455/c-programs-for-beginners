/*Name: sana javed
Roll no#113
program to add two numbers using user defined function*/
#include<stdio.h>
#include<conio.h>
int addNumber(int n1,int n2);
int main(){
	int n1,n2,sum;
	n1=2;
	n2=4;
	sum=addNumber(n1,n2);
	printf("sum=%d",sum);
	getch();
}
int addNumber(int n1,int n2)
{
int result;
result=n1+n2;
return result;
}

