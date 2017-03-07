#include<stdio.h>
#include<conio.h>
float avg(int,int);
int add(int,int);
int n,ans,average;
main(){
	int n1=10,n2=20;
	int ans=add(n1,n2);
	float average=avg(ans,2);
	printf("average of user number is %.2f",average);
	getch();
}
int add(int n1,int n2){
	 ans=n1+n2;
	return ans;
}
float avg(int ans,int n){
	average=ans/n;
	return average;
}
