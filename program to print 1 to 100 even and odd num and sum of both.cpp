#include<stdio.h>
#include<conio.h>
main(){
	int i,even,odd;
	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("%d is even\n",i);
			even=even+i;
		}
		else
		printf("%d is odd\n",i);
		odd=odd+i;
	}
	printf("sum of even numbers is %d\n",even);
	printf("sum of odd numbers is %d\n",odd);
	getch();
}
