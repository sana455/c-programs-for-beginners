#include<stdio.h>
 main()
{
 int a,b,c;
 printf("Enter 3 numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
  printf("Mximum number is a = %d",a);
 else if(b>a && b>c)
  printf("Mximum number is b = %d",b);
 else
   printf("Mximum number is c = %d",c);
 if(a<b && a<c)
  printf("Minimum number is a = %d",a);
 else if(b<a && b<c)
  printf("Minimum number is b = %d",b);
 else
   printf("Minimum number is c = %d",c);
}

