#include<stdio.h>
#include<conio.h>
main()
{
	int PF,ICT,BE,ENG1,CAL,count=1,marks;
	float PFp,ICTp,BEp,ENG1p,CALp,average;
	float PFch=4.0,ICTch=3.0,BEch=3.0,ENG1ch=3.0,CALch=3.0,sumch;
	float gradepoints,gp1,gp2,gp3,gp4,gp5,GPA;	

	for(;count<=5;count++)
	{
		if(count==1)
		{
label:			printf("Enter marks in Programming Fundamentals=\n");
			scanf("%d",&marks);
			if(marks<101)
			{
			PF=marks;
			}
			else{
				printf("Invalid Input\n");
				goto label;
			}
		}
		else if(count==2)
		{
label1:			printf("Enter marks in ENGLISH=\n");
			scanf("%d",&marks);
			if(marks<101){
			ICT=marks;}
			else{
				printf("Invalid Input\n\n\n\n\n\n\n\n\n");
				goto label1;
			}
		}
		else if(count==3)
		{
label2:			printf("Enter marks in CALCULUS=\n");
			scanf("%d",&marks);
			if(marks<101){
			BE=marks;
			}
		else{
				printf("Invalid Input\n");
				goto label2;
			}
		}
		else if(count==4)
		{
label3:			printf("Enter marks in Information Communication & Tech.=\n");
			scanf("%d",&marks);
			if(marks<101){
			ENG1=marks;
			}
			else{
				printf("Invalid Input\n");
				goto label3;
			}
		}
		else if(count==5)
		{
label4:			printf("Enter marks in Basic Electronics=\n");
			scanf("%d",&marks);
			if(marks<101){
			CAL=marks;}
			else{
				printf("Invalid Input\n");
				goto label4;
			}
		}
	if(marks<49.50)
	{
		printf("You've got Grade F\t Points = 0.00\n\n\n");
		if(count==1)
		{PFp=0.00;}
		if(count==2)
		{ENG1p=0.00;}
		if(count==3)
		{CALp=0.00;}
		if(count==4)
		{ICTp=0.00;}
		if(count==5)
		{BEp=0.00;}
		
	}
	else if(marks>=49.50 && marks<54.49)
	{
		printf("You've got Grade D\n Points = 1.00\n\n\n");
		if(count==1)
		{PFp=1.00;}
		if(count==2)
		{ENG1p=1.00;}
		if(count==3)
		{CALp=1.00;}
		if(count==4)
		{ICTp=1.00;}
		if(count==5)
		{BEp=1.00;}
	}
	else if(marks>=54.50 && marks<59.49)
	{
		printf("You've got Grade C\n Points = 1.50\n\n\n");
		if(count==1)
		{PFp=1.50;}
		if(count==2)
		{ENG1p=1.50;}
		if(count==3)
		{CALp=1.50;}
		if(count==4)
		{ICTp=1.50;}
		if(count==5)
		{BEp=1.50;}
	}
	else if( marks>=59.50 && marks<64.49)
	{
		printf("You've got Grade C+\n Points = 2.00\n\n\n");
		if(count==1)
		{PFp=2.00;}
		if(count==2)
		{ENG1p=2.00;}
		if(count==3)
		{CALp=2.00;}
		if(count==4)
		{ICTp=2.00;}
		if(count==5)
		{BEp=2.00;}
	}
	else if(marks>=64.50 && marks<69.49)
	{
		printf("You've got Grade B-\n Points = 2.50\n\n\n");
			if(count==1)
		{PFp=2.50;}
		if(count==2)
		{ENG1p=2.50;}
		if(count==3)
		{CALp=2.50;}
		if(count==4)
		{ICTp=2.50;}
		if(count==5)
		{BEp=2.50;}
	}
	else if(marks>=69.50 && marks<74.49)
	{
		printf("You've got Grade B\n Points = 3.00\n\n\n");
			if(count==1)
		{PFp=3.00;}
		if(count==2)
		{ENG1p=3.00;}
		if(count==3)
		{CALp=3.00;}
		if(count==4)
		{ICTp=3.00;}
		if(count==5)
		{BEp=3.00;}
	}
	else if(marks>=74.50 && marks<=79.49)
	{
		printf("You've got Grade B+\n Points = 3.40\n\n\n");
			if(count==1)
		{PFp=3.40;}
		if(count==2)
		{ENG1p=3.40;}
		if(count==3)
		{CALp=3.40;}
		if(count==4)
		{ICTp=3.40;}
		if(count==5)
		{BEp=3.40;}
	}
	else if(marks>=79.50 && marks<84.49)
	{
		printf("You've got Grade A\n Points = 3.70\n\n\n");
		if(count==1)
		{PFp=3.70;}
		if(count==2)
		{ENG1p=3.70;}
		if(count==3)
		{CALp=3.70;}
		if(count==4)
		{ICTp=3.70;}
		if(count==5)
		{BEp=3.70;}
	}
	
	else if(marks>=84.50)
	{
		printf("You've got Grade A+ \n Points = 4.00\n\n\n");
		if(count==1)
		{PFp=4.00;}
		if(count==2)
		{ENG1p=4.00;}
		if(count==3)
		{CALp=4.00;}
		if(count==4)
		{ICTp=4.00;}
		if(count==5)
		{BEp=4.00;}
	}}
	average = (PF + ICT + BE + ENG1 + CAL)/5;
	printf("\n\n\n average marks =%f\n\n\n",average);	
	 sumch=PFch+ENG1ch+CALch+ICTch+BEch;
	 gp1=PFp*PFch;
	 gp2=ENG1p*ENG1ch;
	 gp3=CALp*CALch;
	 gp4=ICTp*ICTch;
	 gp5=BEp*BEch;
	 gradepoints=gp1+gp2+gp3+gp4+gp5;
	 GPA=gradepoints/sumch;
	 printf("\n\nYou've got GPA=%f",GPA);
	getch();
}
