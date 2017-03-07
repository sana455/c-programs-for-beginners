#include<stdio.h>
#include<conio.h>
void table(int,int);
main(){
	int n,i=1;
	printf("enter number to print table");
	scanf("%d",&n);
	table(n,i);
	getch();
}
void table(int n,int i){
	for(i=1;i<=10;i++){
		printf("%d * %d=%d\n",n,i,n*i);
	}
}
