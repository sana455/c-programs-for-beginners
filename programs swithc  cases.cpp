#include<stdio.h>
#include<conio.h>
void product(int *p1,int *p2){
	int result;
	result=*p1 * *p2;
	printf("product of two number is %d",result);
}
void modulas(int a1,int b1){
	int result;
	result=a1%b1;
	printf("modulas is %d",result);
}

main(){
    int *p1,*p2,temp;
	int p,sum=0,f;
	int max ,min,n,num;
	int arr[10];
	int i,j,k,a,b,c,d;
	char ch,ver;
	printf("\n Are you want to perform a task(y/Y for start)  (n/N for exit)\n");
	scanf("%c",&ver);
	while(ver!='N'&&ver!='n'){
		if(ver=='y'||ver=='Y'){
printf("choose 1 to check vowel\n 2 for prime num\n3 for diamond\n4 for perfect number\n5 for maximum value\n6 for right angle triangle\n7 for factorial\n8 for call by refernce func\n9 for call by value\n10 for swapping numbers using pointer\n ");
	printf("Enter your your choice please:");
	scanf("%d",&num);
	switch(num){
		case 1:
	printf("welcome to program to check character is vowel or not.\n");
	printf("Enter a character:");
	ch=getche();
	if(ch=='A'|ch=='a'|ch=='E'|ch=='e'|ch=='I'|ch=='i'|ch=='O'|ch=='o'|ch=='U'|ch=='u'){
		printf("\nyour entered character %c is vowel",ch);}
	else
	printf("\nyour entered character %c is consonant",ch);
break;
case 2:
	printf("welcome to program to find prime numbers.\n");
	printf("Enter maximum number :");
	scanf("%d",&max);
	printf("Enter minimum number:");
	scanf("%d",&min);
	for(n=min;n<=max;n++){
		for(i=2;i<=n-1;i++){
			if(n%i==0)
			break;
		}
		if(n==i)
		printf("%d\n",n);
	}
	break;
	case 3:
		printf("welcome to diamond patteren.\n");
		printf("enter limit");
		scanf("%d",&n);
		printf("enter symbol:");
		ch=getche();
		printf("\n");
		for(i=1;i<=((2*n)-1);i=i+2){
			for(j=((2*n)-2);j>=i;j=j-2){
				printf(" ");
			}
			for(k=1;k<=i;k++){
				printf("%c",ch);
			}
		printf("\n");
		}
			for(a=1;a<=((2*n)-1);a=a+2){
			for(b=1;b<=a;b=b+2){
				printf(" ");
			}
			for(c=((2*n)-3);c>=a;c--){
				printf("%c",ch);
			}
			printf("\n");
		}
		break;
		case 4:
			printf("welcome to program to check number is perfect or not.\n");
			printf("enter a number to check:");
			scanf("%d",&p);
			for(i=1;i<=p-1;i++){
				if(p%i==0)
				sum=sum+i;
			}
			if(sum==p)
			printf("%d is perfect number",p);
			else
				printf("%d is  not perfect number ",p);
	break;
	case 5:
		printf("welcome to program to find greatest number.\n");
	printf("enter 4 numbers");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b){
		if(a>c){
			if(a>d)
			printf("%d is greater",a);
			else
			printf("%d is greater",d);
		}
		else
		{
			if(c>d)
				printf("%d is greater",c);
			else
			printf("%d is greater",d);
	}
}
else{
			if(b>c){
				if(b>d)
					printf("%d is greater",b);
				else
				printf("%d is greater",d);
			}
			else {
			if(c>d)
				printf("%d is greater",c);
			else
			printf("%d is greater",d);
		}
	}
	break;
		case 6:
			printf("welcome to Right angle triangle  patteren.\n");
			printf("enter limit");
			scanf("%d",&n);
			printf("enter symbol:");
			ch=getche();
			printf("\n");
			for(i=1;i<=n;i++){
				for(j=n-1;j>=i;j--){
					printf(" ");
				}
				for(k=1;k<=i;k++){
					printf("%c",ch);
				}
				printf("\n");
			}
			break;
			case 7:
				printf("welcome to program to finf factorial of number.\n");
				printf("enter number to find factorial:");
				scanf("%d",&n);
				f=1;
				while(n!=0){
					f=f*n;
					n--;
				}
				printf("factorial  is %d :",f);
				break;
				case 8:
					printf("welcome to program to multiply  two numbers.\n");
				printf("enter 1st num");
				scanf("%d",&a);
				printf("enter 2nd num");
				scanf("%d",&b);
				product(&a,&b);
					break;
	case 9:
		printf("welcome to program to take modulas of  two numbers.\n");
		  	printf("enter 1st num");
				scanf("%d",&a);
				printf("enter 2nd num");
				scanf("%d",&b);
				modulas(a,b);
				break;
	case 10:
		printf("welcome to program for swapping two numbers.\n");
	        printf("enter 2 number for swapping:\n");
			scanf("%d %d",&a,&b);
			p1=&a;
			p2=&b;
			printf("numbers before swapping are a=%d  b=%d\n",*p1,*p2);
			temp=*p1;
			*p1=*p2;
			*p2=temp;
			printf("\nnumbers after swapping are a=%d  b=%d\n",*p1,*p2);	
			break;	
	default:
		printf("wrong input\n");
}//switch body close
}// if body close
else 
printf("You entered wrong character");
printf("\n Are you want to perform another trasaction (y/Y for start) and (n/N for exit)\n");
	ver=getche();
}//while body close:
	getch();
}
	
	
	
