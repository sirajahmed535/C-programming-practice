#include<stdio.h>
//While loop program

int main()
{
	int a,count=0;
	
	while (a != 0)
	{
		printf("Enter the number not 0:\n");
		scanf("%d",&a);
		
		printf("you entered :%d\n",a);
		count = count + a;	
	}
	printf("the result :%d",count);
	return 0;
}
