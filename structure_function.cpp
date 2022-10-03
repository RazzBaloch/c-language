#include<stdio.h>

struct Person
{
	int age;
	char name[20];
	float salary ;
	
	int test()
	{
		
	}
	
} ;

int getStruct(struct Person x)
{
	scanf("%d %s %f",&x.age,&x.name,&x.salary);
	printf("%d %s %f",x.age,x.name,x.salary);
	
}
int main()
{
	struct Person p;
	
	getStruct(p);

	return 0;
}
