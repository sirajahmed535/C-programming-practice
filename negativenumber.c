#include<stdio.h>
//program of print negative numbers

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("this is the negative number : %d",a);
	}
	else{
		printf("this is not a negative number");
	}
	return 0;
}
