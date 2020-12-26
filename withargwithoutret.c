//with argument and without return
#include<stdio.h>
#include<math.h>

void p_staric(int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("%c",'*');
	}
}

int main()
{
	int y;
	printf("enter the number\n");
	scanf("%d",&y);
	p_staric(y);
	printf("\nThe steric character is here\n");
	return 0;	
	
}

