#include<stdio.h>
#include<conio.h>
main(){
	int i,j;
	i=1;
	while(i<=5){
		j=4;
		while(j>=i){
			printf(" ");
			j--;
		}
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
	}
