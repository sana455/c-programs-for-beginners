#include<stdio.h>
#include<conio.h>
main(){
	int table,i;
	printf("enter table");
	scanf("%d\n",&table);
	for(i=1;i<=10;i++){
		printf("%d * %d= %d\n",table,i,table*i);
	}
	getch();
}
