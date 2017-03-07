#include<stdio.h>
#include<conio.h>
void checkprime(int);
main(){
	int n;
	printf("enter value for n");
    scanf("%d",&n);
	checkprime(n);
}
	int i=2;
void checkprime(int n){
	for(i=2;i<n-1;i++){
		if(n%i==0)
		break;
	}
	if(i==n)
	printf("%d is prime",n);
	else 
	printf("%d is not prime",n);
}
