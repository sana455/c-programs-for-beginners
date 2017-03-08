#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,s=0,c_n;
	printf("enter a number");
	scanf("%d",&n);
	c_n=n;
	for(;n!=0;)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s==c_n)
	printf(" number is palindrome");
	else
	printf(" number is not palindrome");
	getch();
}
