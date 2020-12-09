#include<stdio.h>
//do while loop
int main()
{
	int num,i=0,count=0;
	printf("enter the positive integer:\n");
	scanf("%d",&num);
	
	do{
		printf("%d\n",i + 1); // i + 1 is where i is the loop variable and 1 is the index i + 1 variable + index 1
		++i;
		count = count + i;
	}while (i<=num);
	
	printf("The total result: %d",count);
	
	return 0;
}
