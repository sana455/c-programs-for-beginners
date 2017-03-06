#include<stdio.h>
#include<conio.h>
unsigned int fib(int);
main(){
	int n,result,i;
	printf("enter limit of fibonacci series::");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	result=fib(i);
	printf("%d\t",result);
}
}
unsigned int fib(int i){
	if(i<2)
	return i;
	else
	return fib(i-1)+fib(i-2);
}
