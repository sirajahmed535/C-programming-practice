#include<stdio.h>
//for loop
int main()
{
	int num,i,count=0;
	printf("enter the positive integer:\n");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		printf("%d\n",i);
		count = count+i;
	}
	printf("The total is :%d",count);
	
	return 0;
}
