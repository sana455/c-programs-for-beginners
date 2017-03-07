#include<stdio.h>
#include<conio.h>
main(){
	int n=55;
	int *ptr;/*   *ptr this show a pointer.pointer is a type of variable that point to address 
	of another variable.*/ 
	ptr=&n;
	printf(" adress of pointer is %x\n",&ptr);//it will print address of pointer 
printf("value of n through pointr is %d\n",*ptr);//*mean it will print value from given adrees
			printf("adress of n is %x\n",ptr);
				printf("%d\n",*(&n));//1stly it will execute(&n) nd thn print value
				*ptr=18;//this will overwrite value of n with 19
					printf("%d\n",n);
		getch();
}
