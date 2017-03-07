#include<stdio.h>
#include<conio.h>
main(){
	int n;
	for(n=65;n<=90;n++){
		printf("%c_%d\t",n,n);
	}
	printf("\n\n\n");
	for(n=97;n<=122;n++){
		printf("%c_%d\t",n,n);
	}
	printf("\n");
	getch();
}
