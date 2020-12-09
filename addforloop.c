#include<stdio.h>
//loop simple addition program
int main()
{
	int num,i,count=0;
	
	
	for(i=0;i<10;i++)
	{
		printf("enter the number which you want to add\n");
		scanf("%d",&num);
		
			count=count+num;
	}

	printf("%d",count);
	
	return 0;
}
