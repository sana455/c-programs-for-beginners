#include<stdio.h> 
#include<conio.h>
#include<string.h>
main(){
	char str[1000];
	int i,length;
	printf(" please enter string  ::\n");
	gets(str);
	length=strlen(str);
	for(i=length-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
