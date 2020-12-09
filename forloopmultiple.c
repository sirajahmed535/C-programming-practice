#include<stdio.h>
// for loop
int main()
{
	int num,i=1,j=1,k=1;
	printf("enter the executed value:\n");
	scanf("%d",&num);
	
	for(;i<=num,j<=num,k<=num;)        
	
	{
		printf("%d %d %d\n",i,j,k);
		i++;
		j++;
		k++;
	}
	return 0;
}
