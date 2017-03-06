#include<stdio.h>
main(){
	int n,min,max,i,sum=0,c_n;
	printf("enter minimum num");
	scanf("%d",&min);
	printf("enter maximum num");
	scanf("%d",&max);
	for(n=min;n<=max;n++){
			c_n=n;
		i=1;
		sum=0;
		while(i<=n-1){
			if(n%i==0)
			sum=sum+i;
			i++;
		}
		if(sum==c_n)
		printf("perfect numbr is %d\n",c_n);
	}
}
	
