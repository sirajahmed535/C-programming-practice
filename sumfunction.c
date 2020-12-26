#include<stdio.h>
#include<math.h>
int sumnatural(int n);
int main()
{
	int num,k;
	printf("enter the number:\n");
	scanf("%d",&num);
	k = sumnatural(num);
	printf("%d",k);
	return 0;
}

int sumnatural(int n)
{
	int c;
	if(n!=0)
	{
		return  n+sumnatural(n-1);
	}
	else
	{
		return n;
	}

}
