#include<stdio.h>
#include<conio.h>
main(){
	int n,f=1,c_n;
	printf("enter any number:");
	scanf("%d",&n);
	c_n=n;
	while(n!=0){
	f=f*n;
	n--;
}
printf("factorial of %d is %d",c_n,f);
getch();
}
