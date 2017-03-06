#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=1;i<=((2*n)-1);i=i+2){
		for(j=((2*n)-2);j>=i;j=j-2){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
