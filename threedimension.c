#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k;
	int arrr1[2][2][4];
	printf("Enter the number of array elements:\n");
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			
			for(k=0;k<4;k++)
			{
				scanf("%d",&arrr1[i][j][k]);
			}
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
				printf("%d",arrr1[i][j][k]);
			}
		}
	}
	return 0;
}
