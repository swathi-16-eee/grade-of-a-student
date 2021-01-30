#include<stdio.h>
main()
{
	char grade;
	int mark;
	printf("Enter the mark of the student:\n");
	scanf("%d",&mark);
	 if(mark>=85)
	{
		grade='A';
	}
	else if(mark>=70)
	{
		grade='B';
	}
	else if(mark>=55)
	{
		grade='C';
	}
	else if(mark>=40)
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
	printf("The grade of the student is %c",grade);
}
