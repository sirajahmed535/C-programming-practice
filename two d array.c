//two-d or multi-d Array program print the store num in array
#include<stdio.h>
#include<math.h>

int main()
{
	int arr1[2][3];
	int i,j;
	printf("please input the numbers:\n");
	
	for(i=0;i<2;i++)
	{
		printf("Rows %d\n",arr1[i][j]);
		for(j=0;j<3;j++)
		{
			printf("input the number in columns %d\n",arr1[i][j]);
			scanf("%d",&arr1[i][j]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr1[i][j]);
		}
	}	
	return 0;
}
