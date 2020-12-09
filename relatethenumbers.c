#include<stdio.h>
//program to relate two integers

int main()
{
	int a;
	int b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	
	if(a==b)
	{
		printf("numbers are equal :%d %d",a,b);
	}
	else if(a>=b)
	{
		printf("a is greater then b :%d %d",a,b);
	}
	else if(a<=b)
	{
		printf("a is less then b :%d %d",a,b);
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
