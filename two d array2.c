#include<stdio.h>
#include<math.h>

int main()
{
	int arr10[2][3];
	int i,j,c,sum=0;
	printf("enter the array numbers:\n");
	for(i=0;i<2;i++)
	{
		printf("Array Inputs %d\n",arr10[i][j]);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr10[i][j]);
		}
		
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr10[i][j]);
			sum = sum + arr10[i][j];
		}
	}
	printf("\n The result of the input numbers %d",sum);
	return 0;
}
