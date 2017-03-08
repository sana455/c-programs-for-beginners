#include<stdio.h>
#include<conio.h>
main(){
	int i,j;
	for(j=65;j<=90;j++){
		for(i=65;i<=j;i++){
			printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
