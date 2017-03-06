#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k,n;
	printf("enter limit of rows ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		j=n-1;
		while(j>=i){
			printf(" ");
			j--;
		}
		k=1;
		while(k<=i){
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
	}
