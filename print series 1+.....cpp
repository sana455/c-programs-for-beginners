#include<stdio.h>
#include<conio.h>
main(){
	float sum=0;
	int i=1;
	int n;
	printf("enter num");
	scanf("%d\n",&n);
	while(i<=n){
		sum=sum+(1/i);
		printf("%d/%d+",1,i);
		i++;
	}
	printf("\n sum is %.2f",sum);
	getch();
}
