#include<stdio.h>
float sum(int , int);
 main()
{
	int a,b;
	a=5;
	b=6;
	float r=sum(a,b);
	printf(" result is : %0.2f",r);
}
/////////
float sum(int n1, int n2)
{
	float result;
	result=n1+n2;
	//printf("result is : %d",result);
	return result;
}

