#include<stdio.h>
#include<conio.h>
void checkprime();
main(){
	checkprime();
	getch();
}
void checkprime(){
	int n,i=2;
	printf("enter value");
	scanf("%d\n",&n);
	for(i=2;i<=n-1;i++){
		if(n%i==0)
			break;
		if(i==n){
			printf("%d is prime",n);
		}
		else
		printf("%d is not prime",n);
	}
}
