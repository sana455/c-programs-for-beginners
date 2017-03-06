#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	char ver;
	int Y;
	int a,b,c,i,j,k;
	int n;
	int table,m;
	char ch;
	printf("\nare you want to perform a task (N for exit )and (Y for start)\n");
	ver=getche();
	while(ver!='n'&&ver!='N')
	{
		if(ver=='y'||ver=='Y'){
	printf("\nChoose 1 for Diamond and 2 for table : ");
	scanf("%d",&num);
	
	switch(num)
	{
	case 1:
	
	printf("Enter Limit : ");
	scanf("%d",&n);
	printf("Enter Symbol : ");
	ch=getchar();
	printf("\n");
	for(i=1;i<=((2*n)-1);i=i+2)
	{
		for(j=((2*n)-2);j>=i;j=j-2)
		printf("   ");
		for(k=1;k<=i;k++)
		printf(" %c ",ch);
		printf("\n");
	}
	for(a=1;a<=((2*n)-1);a=a+2)
	{
		for(b=1;b<=a;b=b+2)
			printf("   ");
		for(c=((2*n)-3);c>=a;c--)
			printf(" %c ",ch);
		printf("\n");	
	}
	break;
	case 2:
		
		printf("Enter Table Number : ");
		scanf("%d",&table);
		for(m=1;m<=10;m++)
		{
			printf("%d * %d = %d\n",table,m,table*m);
		}
	break;
	default:
	printf("wrong input\n");
	/////////////
}/////end switch
}/// end if statement
else{
	printf("\nyou entered wrong character");
}
printf("\nAre u want to perform another transaction (N for Exit.) : \n");
ver=getche();
}// end while
}

