#include<stdio.h>
main(){
	int n,r,f=1,sum=0,c_n;
	printf("enter a number ");
	scanf("%d",&n);
	c_n=n;
	while(n!=0){
		r=n%10;
		n=n/10;
		while(r!=0){
			f=f*r;
			r--;
			
		}
		sum=sum+f;
	}
	if(sum==c_n)
	printf(" %d  is strong numbr",c_n);
	else
		printf(" %d  is not  strong numbr",c_n);
}
	
