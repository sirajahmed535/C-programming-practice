#include<stdio.h>
//half pyramid program in for loop

int main()
{
	int i,j;
	int rows;
	printf("enter the rows\n");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}
