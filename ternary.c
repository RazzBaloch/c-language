#include<stdio.h>
int main()
{
	int num1=123,
	    num2=135, 
		num3=149,
		result;
// find minimum value

 	result=	(num1<num2 && num1<num3) ? num1   :   (num2<num3) ? num2:num3;       
	printf("%d",result);

return 0;
}

