#include<stdio.h>
#include<conio.h>
int getinteger();
main(){
	int n,i=2;
	n=getinteger();
	for(i=2;i<=n-1;i++){
		if(n%i==0)
			break;
		}
		if(i==n){
			printf("%d is prime",n);
		}
		else
		printf("%d is not prime",n);
}
int n;
int getinteger(){
printf("enter value for n");
scanf("%d",&n);
return n;
	}
