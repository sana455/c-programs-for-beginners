#include<stdio.h>
#include<conio.h>
unsigned int fib(int);
main(){
	int n,result;
	printf("enter limit of fibonacci series::");
	scanf("%d",&n);
	result=fib(n);
	printf("last digit of fibonacci series is %d",result);
}
unsigned int fib(int n){
	if(n<2)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
