/*    program to print diamond in odd sequence
          */
#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k,n,a,b,c;
	printf("enter limit");
	scanf("%d",&n);
	for(i=1;i<=((2*n)-1);i=i+2){
		for(j=((2*n)-2);j>=i;j=j-2){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=(((2*n)-1)-2);a=a+2){
		for(b=1;b<=a;b=b+2){
			printf(" ");
		}
		for(c=(((2*n)-1)-2);c>=a;c--){
			printf("*");
		}
		printf("\n");
	}
}
