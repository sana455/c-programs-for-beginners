#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k,n;
	printf("enter limit of rows ");
	scanf("%d",&n);
	i=1;
	do{
		j=n-1;
		do{
			printf(" ");
			j--;
		}
		while(j>=i);
		k=1;
		do{
			printf("*");
			k++;
		}
		while(k<=i);
		printf("\n");
		i++;
	}
	while(i<n);
	}
