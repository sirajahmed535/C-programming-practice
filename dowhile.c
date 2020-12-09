#include<stdio.h>
//do while loop program
int main()
{
	int number;
	printf("This is your do while program:\n\n");
	printf("Enter the starting initial value:\n\n");
	scanf("%d",&number);
	printf("you entered the value %d:\n",number);
	
	do{
		printf("%d\n",number);
		number++;
	}while(number<=10);
	
	return 0;
}
