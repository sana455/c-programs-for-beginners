#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
	int pf_marks,ict_marks,be_marks,eng_marks,cal_marks,total_marks,gradepoints;
float TOTAL_GPA,pf_GPA,ict_GPA,be_GPA,eng_GPA,cal_GPA,avg,pfCH=4.0,ictCH=3.0,beCH=3.0,engCH=2.0,calCH=2.0,sum_of_CH;
	float pf_gp,ict_gp,be_gp,eng_gp,cal_gp;
	char grade;
	printf("\n enter marks of prog fundamental");
	scanf("%d",&pf_marks");
	if(pf_marks>=85){
		pf_GPA=4.00;
		printf("your gade is A+\nyour GPAis 4.00");
	}
	else if(pf_marks>=80&&pf_marks<=84){
		pf_GPA=3.70;
		printf("your grade is A\nyour GPA is 3.70");
	}
	else if(pf_marks>=75&&pf_marks<=79){
		pf_GPA=3.40;
		printf("your grade is B+\nyour GPA is 3.40.00");
	}
	else if(pf_marks>=70&&pf_marks<=74){
		pf_GPA=3.00;
		printf("your grade is B\nyour GPAis 3.00");
	}
	else if(pf_marks>=65&&pf_marks<=69){
		pf_GPA=2.50;
		printf("your grade is B-\nyour GPA is 2.50");
	}
	else if(pf_marks>=60&&pf_marks<=64){
		pf_GPA=2.00;
		printf("your grade is C+\nyour GPA is 2.00 ");
	}
	else if(pf_marks>=55&&pf_marks<=59){
		pf_GPA=1.50;
		printf("your grade is C\n your GPA is 1.50");
	}
	else if(pf_marks>=50&&pf_marks<=54){
		pf_GPA=1.00;
		printf("your grade is D\n your GPA is 1.00");
	}
	else if (pf_marks>=35&&pf_marks<=49){
		pf_GPA=0.00;
		printf("your grade is F\nyour GPA is 0.00");
}
else if(pf_marks>=0&&pf_marks<=35)
{
	printf("you are fail");
}
else
	{
	printf("invalid input");
	}

	printf("\n enter marks of ict");
	scanf("%d",&ict_marks);
	if(ict_marks>=85){
		ict_GPA=3.40;
		printf("your gade is A+\nyour GPAis 4.00");
	}
	else if(ict_marks>=80&&ict_marks<=84){
		ict_GPA=3.70;
		printf("your grade is A\nyour GPA is 3.70");
	}
	else if(ict_marks>=75&&ict_marks<=74){
		ict_GPA=3.40;
		printf("your grade is B+\nyour GPA is 3.40.00");
}
	else if(ict_marks>=70&&ict_marks<=74)
{
		ict_GPA=3.00;
		printf("your grade is B\nyour GPAis 3.00");
	}
	else if(ict_marks>=65&&ict_marks<=69){
		ict_GPA=2.50;
		printf("your grade is B-\nyour GPA is 2.50");
	}
	else if(ict_marks>=60&&ict_marks<=64){
		ict_GPA=2.00;
		printf("your grade is C+\nyour GPA is 2.00 ");
	}
	else if(ict_marks>=55&&ict_marks<=59){
		ict_GPA=1.50;
		printf("your grade is C\n your GPA is 1.50");
	}
	else if(ict_marks>=50&&ict_marks<=54){
		ict_GPA=1.00;
		printf("your grade is D\n your GPA is 1.00");
	}
	else if(ict_marks>=35&&ict_marks<=49){
		ict_GPA=0.00;
		printf("your grade is F\nyour GPA is 0.00");
	}
	else if(ict_marks>=0&&ict_marks<=35)
	{
	printf("you are fail");
}else
	{
	printf("invalid input");
	}
	printf("\n enter marks of basic electronics");
	scanf("%d",&be_marks);
		if(be_marks>=85){
			be_GPA=3.40;
		printf("your gade is A+\nyour GPAis 4.00");
	}
	else if(be_marks>=80&&be_marks<=84){
		be_GPA=3.70;
		printf("your grade is A\nyour GPA is 3.70");
	}
	else if(be_marks>=75&&be_marks<=79){
		be_GPA=3.40;
		printf("your grade is B+\nyour GPA is 3.40.00");
	}
	else if(be_marks>=70&&be_marks<=74){
		be_GPA=3.00;
		printf("your grade is B\nyour GPAis 3.00");
	}
	else if(be_marks>=65&&be_marks<=69){
		be_GPA=2.50;
		printf("your grade is B-\nyour GPA is 2.50");
	}
	else if(be_marks>=60&&be_marks<=64){
		be_GPA=2.00;
		printf("your grade is C+\nyour GPA is 2.00 ");
	}
	else if(be_marks>=55&&be_marks<=59){
		be_GPA=1.50;
		printf("your grade is C\n your GPA is 1.50");
	}
	else if(be_marks>=50&&be_marks<=54){
		be_GPA=1.00;
		printf("your grade is D\n your GPA is 1.00");
	}
	else if (be_marks>=35&&be_marks<=49){
		be_GPA=0.00;
		printf("your grade is F\nyour GPA is 0.00");
	}
		else if(be_marks>=0&&be_marks<=35)
		{
	printf("you are fail");
}else
	{
	printf("invalid input");
	}
	printf("\n enter marks of english");
	scanf("%d",&eng_marks);
		if(eng_marks>=85){
			eng_GPA=3.40;
		printf("your gade is A+\nyour GPAis 4.00");
	}
	else if(eng_marks>=80&&eng_marks<=84){
		eng_GPA=3.70;
		printf("your grade is A\nyour GPA is 3.70");
	}
	else if(eng_marks>=75&&eng_marks<=79){
		eng_GPA=3.40;
		printf("your grade is B+\nyour GPA is 3.40.00");
	}
	else if(eng_marks>=70&&eng_marks<=74){
		eng_GPA=3.00;
		printf("your grade is B\nyour GPAis 3.00");
	}
	else if(eng_marks>=65&&eng_marks<=69){
		eng_GPA=2.50;
		printf("your grade is B-\nyour GPA is 2.50");
	}
	else if(eng_marks>=60&&eng_marks<=64){
		eng_GPA=2.00;
		printf("your grade is C+\nyour GPA is 2.00 ");
	}
	else if(eng_marks>=55&&eng_marks<=59){
		eng_GPA=1.50;
		printf("your grade is C\n your GPA is 1.50");
	}
	else if(eng_marks>=50&&eng_marks<=54){
		eng_GPA=1.00;
		printf("your grade is D\n your GPA is 1.00");
	}
	else if (eng_marks>=35&&eng_marks<=49){
		eng_GPA=0.00;
		printf("your grade is F\nyour GPA is 0.00");
	}
		else if(eng_marks<=35)
		{
	printf("you are fail");
}else
	{
	printf("invalid input");
	}
	printf("\n enter marks of calculas");
	scanf("%d",&cal_marks);
		if(cal_marks>=85){
			cal_GPA=3.40;
		printf("your gade is A+\nyour GPAis 4.00");
	}
	else if(cal_marks>=80&&cal_marks<=84){
		cal_GPA=3.70;
		printf("your grade is A\nyour GPA is 3.70");
	}
	else if(cal_marks>=75&&cal_marks<=79){
		cal_GPA=3.40;
		printf("your grade is B+\nyour GPA is 3.40.00");
	}
	else if(cal_marks>=70&&cal_marks<=74){
		cal_GPA=3.00;
		printf("your grade is B\nyour GPAis 3.00");
	}
	else if(cal_marks>=65&&cal_marks<=69){
		cal_GPA=2.50;
		printf("your grade is B-\nyour GPA is 2.50");
	}
	else if(cal_marks>=60&&cal_marks<=64){
		cal_GPA=2.00;
		printf("your grade is C+\nyour GPA is 2.00 ");
	}
	else if(cal_marks>=55&&cal_marks<=59){
		cal_GPA=1.50;
		printf("your grade is C\n your GPA is 1.50");
	}
	else if(cal_marks>=50&&cal_marks<=54){
		cal_GPA=1.00;
		printf("your grade is D\n your GPA is 1.00");
	}
	else if (cal_marks>=35&&cal_marks<=49){
		cal_GPA=0.00;
		printf("your grade is F\nyour GPA is 0.00");
	}
		else if(cal_marks>=0&&cal_marks<=35)
		{
	printf("you are fail");
}else
	{
	printf("invalid input");
	}
	avg=(pf_marks+ict_marks+be_marks+eng_marks+cal_marks)/5.0;
	printf("\nyour average is%f",avg);
	sum_of_CH=pfCH+ictCH+beCH+engCH+calCH;
	pf_gp=pf_GPA*pfCH;
	ict_gp=ict_GPA*ictCH;
	be_gp=be_GPA*beCH;
	eng_gp=eng_GPA*engCH;
	cal_gp=cal_GPA*calCH;
	gradepoints=pf_gp+ict_gp+be_gp+eng_gp+cal_gp;
	TOTAL_GPA=gradepoints/sum_of_CH;
	printf("\nyour TOTAL_GPA IS %f",TOTAL_GPA);
	getch();
}
