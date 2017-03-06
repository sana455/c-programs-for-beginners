#include<stdio.h>
#include<conio.h>
int power(int,int);
main(){
	int x,n,result,c;
	printf("enter base to find power::");
	scanf("%d",&x);
	printf("enter  power of number::");
	scanf("%d",&n);
	c=power(x,n);
	printf("your result is %d",c);
}
int power(int x,int n){
	int c;
	if(n==0)
	return 1;
	else
	c =x*power(x,n-1);
	return c;
}
