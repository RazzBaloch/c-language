#include<stdio.h>
int main()
{
	int  n1=111,
	     n2=243,
		 n3=36;
	
	printf("enter any three numbers : \n");


	scanf("%d %d %d",&n1,&n2,&n3);// 3,6,1
	
	if(n1>n2 && n1>n3)
	{
		printf("%d",n1);
	}
	else if(n2>n3)//
	{
		printf("%d",n2);
	}
	else
	{
		printf("%d",n3);
	}
	
	return 0;
}
