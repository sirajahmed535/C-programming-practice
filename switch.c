#include<stdio.h>

int main()
{
	char number;
	int num1,num2;
	printf("Welcome to my coding class:\n\n");
	printf("Enter the operator you want to use:\n\n");
	scanf("%c",&number);
	printf("Enter the numbers which you want to apply the operator in it:\n\n" );
	scanf("%d %d",&num1,&num2);
	switch(number)
	{
		case '+':
		printf("The addition of this is %d + %d = %d",num1,num2,num1+num2);
		break;
		
		case '-':
		printf("The addition of this is %d - %d = %d",num1,num2,num1-num2);
		break;
		
		case '*':
		printf("The addition of this is %d * %d = %d",num1,num2,num1*num2);
		break;
		
		case '/':
		printf("The addition of this is %d / %d = %d",num1,num2,num1/num2);
		break;
		
		case '%':
		printf("The addition of this is %d  %d = %d",num1,num2,num1%num2);
		break;
		
		default:
		printf("The operator you entered is invalid");
		break;
		}	
	return 0;
}
