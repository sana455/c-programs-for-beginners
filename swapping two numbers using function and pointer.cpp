#include<stdio.h>
#include<conio.h>
void swap(int* ,int*);
main(){
	
	int a,b;
	printf("enter value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("value of a before swap is %d\n",a);
		printf("value of b before swap is %d\n",b);
		swap(&a,&b);
	}
	void swap(int *p1, int *p2){
		int temp;
		temp=*p1;
		*p1=*p2;
		*p2=temp;
			printf("value of a after swap is %d\n",*p1);
				printf("value of b after swap is %d\n",*p2);
		}
