#include<stdio.h>
#include<math.h>
int isprime(int a);
int flag = 0;
int main()
{
	int num,c;
	printf("enter the number:\n");
	scanf("%d",&num);
	c = isprime(num);
	printf("%d",c);
	return 0;
}

int isprime(int a)
{
	int i;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(a==1)
	{
		printf("prime number");
	}
	else{
	
	if(flag==0)
	{
		printf("%d is a prime number",a);
	}
	else{
		printf("%d not a prime number",a);
	}
	}
	return 0;
}


