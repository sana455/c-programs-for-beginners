#include<stdio.h> 
#include<conio.h>
#include<string.h>
main(){
	char str[1000],ch;
	int i,frequency=0;
	printf(" please enter string only in lower or upper case ::\n");
	gets(str);
	printf("enter a character to find frequency:");
	ch=getche();
	for(i=0;str[i]!='\0';i++){
		if(ch==str[i])
		++frequency;
	}
	printf("\n\n %c occurs %d times in string:",ch,frequency);
}

