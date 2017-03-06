#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k,a,b,c;
	char ch;
	printf("Enter Limit : ");
	scanf("%d",&n);
	printf("Enter Symbol : ");
	ch=getch();
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("  %c",ch);
		printf("\n");
	}
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
			printf(" ");
		for(c=n-1;c>=a;c--)
			printf("  %c",ch);
		printf("\n");	
	
	}}
