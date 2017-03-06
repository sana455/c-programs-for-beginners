#include<stdio.h>
#include<conio.h>
int checkpal(int);
main(){
	int sum,i,n;
	printf("palindrome numbers are::\n");
	while(n<=1000){
		n=1;
	sum=checkpal(n);
	if(n==sum)
	printf("%d\n",n);
    n++;
}
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
