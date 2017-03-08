#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,s=0,c_n;
    printf("enter a number");
    scanf("%d",&n);
    c_n=n;
    while(n!=0)
    {
    	r=n%10;
    	n=n/10;
    	r=r*r*r;
    	s=s+r;
	}
	if(s==c_n){
		printf("number is armstrong");
	}
	else{
		printf("numer is not armstrong");
	}
	getch();
}
