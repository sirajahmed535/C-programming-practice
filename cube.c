#include<stdio.h>
#include<math.h>
int cube(int n);
int main()
{
	int num,result;
	printf("Enter the number:\n");
	scanf("%d",&num);
	result = cube(num);
	printf("%d",result);
	return 0;
	
}

int cube(int n)
{
	return n*n*n;
}
