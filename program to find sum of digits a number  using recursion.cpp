#include<stdio.h>
#include<conio.h>
int sumofdigits(int);
main(){
	int n,sum;
		printf("enter a numbr::");
	scanf("%d",&n);
	sum=sumofdigits(n);
	printf("sum of digits of %d is %d \n",n,sum);
	getch();
}
int sumofdigits(int num){
	if(num==0)
return 0;
else 
	return num%10+sumofdigits(num/10);
}
