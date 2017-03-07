#include<stdio.h>
#include<conio.h>
main()
	{
	int n,i,sum=0;
	printf("enter any number");
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\nsum is %d",sum);
	getch();
	}
