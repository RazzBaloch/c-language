#include<stdio.h>
int main()
{
	int eng,science,math;	
	float percentage,TotalMarks;
	
	printf("Enter marks of English:");
	scanf("%d",& eng);
	
	printf("Enter marks of science:");
	scanf("%d",&science);
	
	printf("Enter marks of Mathematics:");
	scanf("%d",&math);
	
	printf("Marks Of Subjects:\n");
	//printf("english=%d\nscience=%d\nMaths=%d",eng,science,math);

	TotalMarks =eng+science+math;
	
	
	printf("\nTotal marks = %.f\n",TotalMarks);
	
	percentage = TotalMarks/3;
	
	printf("Percentage = %f",percentage);
	
	if(percentage>=90)
	{
		printf("\nGrade A+\n");
	}
	else if(percentage>=70)
	{
		printf("\nGrade A\n");
	}
	else if(percentage>=55)
	{
		printf("\nGrade B\n");
	}
	else
	{
		printf("\nGrade D\n");
	}
	
	
	return 0;
}
