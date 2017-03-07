#include<stdio.h>
#include<conio.h>
int nextprime(int);
int checkprime(int);
main(){
	int n,i;
	printf("enter num");
	scanf("%d",&n);
	for(i=2;i<=n-i;nextprime(i)){
		if(checkprime(n-i))
		printf("%d + %d= %d\n",i,n-i,n);
	}
}
int nextprime(int x){
	do
	x++;
	while(checkprime(x));
	return (x);
}
int checkprime(int n)
{
	for(int i=2;i<=n-1;i++){
	if(n%i==0)
	break;
}
if(i==n)
return 1;
else
return 0;
}
