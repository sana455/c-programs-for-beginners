#include<stdio.h>
#include<conio.h>
main(){
	int a=5,b=9;
	int temp;
	int *p1;
	int *p2;
	p1=&a;
	p2=&b;
	printf("value of a before swap is %d\n",*p1);
		printf("value of b before swap is %d\n",*p2);
		temp=*p1;
		*p1=*p2;
		*p2=temp;
			printf("value of a after swap is %d\n",*p1);
				printf("value of b after swap is %d\n",*p2);
			}
