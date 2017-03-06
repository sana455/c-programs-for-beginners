#include<stdio.h>
#include<conio.h>
int checkpal(int);
main(){
	int n,sum,c_n;
	printf("enter a numbr to check::");
	scanf("%d",&n);
	c_n=n;
	sum=checkpal(n);
	
	if(c_n==sum)
	printf("%d is palindrome",n);
	else
	printf("%d is not palindrome",n);
	return 0;
}
int sum=0;
int checkpal(int n){
	int r;
	if(n!=0){
		r=n%10;
		sum=sum*10+r;
		checkpal(n/10);
	}
	return sum;
}
