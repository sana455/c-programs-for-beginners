#include<stdio.h>
#include<conio.h>
int checkprime(int);
main(){
	int n,ans;
	printf("enter value for n");
	scanf("%d",&n);
	ans=checkprime(n);
	if(ans==1)
	printf("%d is prime",n);
	else
	printf("%d is not prime",n);
return 0; 
}
int checkprime(int n){
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0)
		 break;
	}
	if(i==n)//if ki condition me agr "1" aye tou wo ans true hota h or agr "0" ay to false hota h
	return 1;
	else
	return 0;
}

