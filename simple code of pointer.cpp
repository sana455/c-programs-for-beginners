#include<stdio.h>
main(){
	int n=7;
	int *a;
	a=&n;
	printf("%x\n",a);
	printf("%d\n",*a);
	printf("%x\n",&n);
	printf("%d\n",*(&n));
	
}
