#include<stdio.h>
#include<math.h>

int squareof(int a);
int main()
{
	int num,result;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	result = squareof(num);
	printf("%d*%d=%d",num,num,result);
	return 0;
}

int squareof(int a)
{
		return a*a;
}
