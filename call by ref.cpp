#include<stdio.h>
int  sum(int , int);
 main()
{
	void *p1,*p2;
	int a,b;
	a=5;
	b=6;
	p1=&a;
	p2=&b;
 int  r=sum(a,b);
	printf(" result is : %d",r);
}
/////////
int sum(int p1, int p2)
{
	int  result;
	result=*p1+*p2;
	//printf("result is : %d",result);
	return result;
}

