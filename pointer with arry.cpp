#include<stdio.h>
#include<conio.h>
main(){
	int arr[]={2,3,6,4,7};
	int *p;
	for(p=&arr[0];p<=&arr[4];p++){
		if(p==&arr[3])
		*p=44;
		printf("value of p is %d\n",*p);
			printf("address of p is %x\n",p);
				printf("value of array through pointer is %d\n",*p);
}
	}
