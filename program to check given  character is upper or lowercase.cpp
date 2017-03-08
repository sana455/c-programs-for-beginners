#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main(){
	char ch;
	printf("enter any character");
	scanf("%c\n",&ch);
	if(isupper(ch)){
		printf("%c is uppercase alphabet\n",ch);
	}
	else if(islower(ch)){
		printf("%c is lowercase alphabet\n",ch);
	}
	else
	printf("%c is not alphabet");
	getch();
}
