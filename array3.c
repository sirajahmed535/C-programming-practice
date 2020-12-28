#include<stdio.h>
#include<math.h>

int main()
{
	int arr1[5];
	int n,i,sum=0,average;
	printf("Array program:\n");
	printf("Enter the n number of elements:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		
		sum = sum+arr1[i];   //sum = 0 + arr1[i];
	}
	average = sum/n;   //the average formula    a = sum of numbers/total numbers;
	
	printf("The result of numbers is %d",average);
	return 0;
}


