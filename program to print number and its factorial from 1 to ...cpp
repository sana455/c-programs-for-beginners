#include<stdio.h>
#include<conio.h>
main(){
	int num,n,m;
	long int f;
	printf("enter num");
	scanf("%d",&num);
	printf("\ninteger\t\tfactorial\n");
	for(m=1;m<=num;m++){
		f=1;
		for(n=1;n<=m;n++){
			f=f*n;
			printf("%d\t\t%.2f\n",m,f);
		}
	}
	getch();
}
