#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,s=0;
	printf("enter a number");
	scanf("%d",&n);
	for(;n!=0;)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	printf("your reverse number is %d",s);
	getch();
}
