#include<stdio.h>
//while loop program
int main()
{
	int number;
	printf("This is your while loop program:\n\n");
	printf("enter the initial number:\n\n");
	scanf("%d",&number);
	printf("The loop starts from %d:\n",number);
	while(number<=100)
	{
		printf("%d\n",number);
		number++;
	}
	return 0;
}
