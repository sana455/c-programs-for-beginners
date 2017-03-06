#include<stdio.h>
#include<conio.h>
unsigned int factorial(int);
main(){
	int n,result;
	printf("enter number::");
	scanf("%d",&n);
	result=factorial(n);
	printf("factorial of %d is %d",n,result);
	getch();
}
unsigned int factorial(int n){
	if(n>=1)
	return n*factorial(n-1);
	else
	return 1;
}

