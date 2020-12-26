//sum natural numbers program recursive function
#include<stdio.h>
#include<math.h>
int sum(int n);
int main()
{
	int num,c;
	printf("recursive program:\n");
	printf("Enter the positive number:\n");
	scanf("%d",&num);
	c = sum(num);
	printf("%d",c);
	return 0;
}

int sum(int n)
{
	if(n!=0)
	{
		return n+sum(n-1);
	}
	else if(n<0)
	{
		return 0;
	}
	else if(n=0)
	{
		return 1;
	}
	else
	{
		return n;
	}
}
