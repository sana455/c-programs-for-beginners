#include<stdio.h>
#include<conio.h>
main(){
	int sum=0,n,i=1,cube;
	printf("enter num");
	scanf("%d",&n);
	while(i<=n){
		cube=i*i*i;
		printf("cube of %d is %d\n",i,cube);
		//printf("\n%d*%d*%d=%d",i,i,i,i*i*i);
		sum=sum+(i*i*i);
		i++;
	}
	printf("\n sum is %d",sum);
	getch();
}
