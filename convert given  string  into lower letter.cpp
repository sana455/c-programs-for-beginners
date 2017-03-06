#include<stdio.h> 
#include<conio.h>
#include<string.h>
main(){
	char str[1000];
	printf(" please enter string  ::\n");
	gets(str);
	strlwr(str);
	printf("string  in lower letter is (%s)",str);
	printf("\n");
   strupr(str);
	printf("string  in upper letter is (%s)",str)  ;
}
