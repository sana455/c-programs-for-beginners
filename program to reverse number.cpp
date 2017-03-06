#include<stdio.h>
#include<conio.h>
int reverse_num(int);
main(){
	int n,sum;
	printf("enter a numbr to reverse::");
	scanf("%d",&n);
	sum=reverse_num(n);
	printf("reverse number is %d",sum);
}
int sum=0;
int reverse_num(int n){
	int r;
	if(n!=0){
		r=n%10;
		sum=sum*10+r;
		reverse_num(n/10);
	}
	return sum;
}
