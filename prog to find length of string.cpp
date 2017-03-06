#include<stdio.h> 
#include<conio.h>
#include<string.h>
main(){
	char str[1000];
	int length;
	printf(" please enter string  ::\n");
	gets(str);
	length=strlen(str);
	printf("length of string is %d",length);
}
