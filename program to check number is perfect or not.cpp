#include<stdio.h>
#include<conio.h>
main(){
	int n,sum=0,i=1;
	printf("enter a number");
	scanf("%d",&n);
	for(;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("%d is a perfect number",n);
	}
	else
	printf("%d is not a perfect number",n);
	getch();
}
