#include<stdio.h>
#include<conio.h>
void add(int,int);
main(){
	int n1,n2,*ptr1,*ptr2;
	printf("enter a value of n1");
	scanf("%d",&n1);
	printf("enter a value of n2");
	scanf("%d",&n2);
	ptr1=&n1;
    ptr2=&n2;
    add(n1,n2);
}
int n1,n2,*ptr3;
void add(int n1 ,int n2 ){
	int s=n1+n2;
	ptr3=&s;
	printf("sum is %d",*ptr3);
}
