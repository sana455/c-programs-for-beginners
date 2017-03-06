#include<stdio.h>
#include<conio.h>
main(){
	int i,j;
	for(i=1;i<=5;i=i+2){
		for(j=1;j<=i-1;j=j+2){
			printf(" ");
		}
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
}
