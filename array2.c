//Array program print the store num in array
#include<stdio.h>
#include<math.h>

int main()
{
	int arr1[5];
	int i,j;
	printf("please input the marks one by one:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the number:\n");
		scanf("%d",&arr1[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("\nthe printed number:");
		printf("%d",arr1[j]);
	}
	return 0;
}
