#include<stdio.h>
int main()
{
	int a=45,b=122,c=223,res;
	
	//res = (a>b) ? a : b ;	
//	printf("max num is = %d",res);

	res = (a>b) ? (a>c) ? a: c : (b>c) ? b : c  ;
	
	printf("%d",res);              
	
	
	return 0;
}
