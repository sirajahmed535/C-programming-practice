#include<stdio.h>
#include<math.h>
int facto(int n);
int sum = 1;
int main()
{
	int num,result;
	printf("enter the number:\n");
	scanf("%d",&num);
	result = facto(num);
	printf("%d",&result);
	return 0;
}

int facto(int n)
{
	int i;
	if(n==0 || n==1)
	{
		return 1;
	}
	else{
		for(i=1;i<=n;i++)
	{
	return sum=sum*i;
	}
		}
}
