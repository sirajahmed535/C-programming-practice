#include<stdio.h>
//do while loop program

int main()
{
	int i=0,a;
	
	do{
		printf("enter the number not 0:\n");
		scanf("%d",&a);
		
		i = i + a;
	}while (a != 0);
	
	printf("The total is :%d",i);
	return 0;
}
