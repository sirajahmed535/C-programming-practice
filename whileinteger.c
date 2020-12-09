#include<stdio.h>
//marksheet

int main()
{
	int num,i=1,count=0;
	printf("enter the positive integer\n");
	scanf("%d",&num);
	
	while(i<=num)
	{
		printf("%d\n",i);
		i++;
		
		count = count + i;
	}
	printf("The total result is : %d",count);
	return 0;
}
