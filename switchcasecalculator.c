#include<stdio.h>
//switch case program

int main ()
{
	char ch;
	int are;
	int num1,num2;
	
	printf("This is your simple calculator:-\n\n");
	printf("enter your operator ( +  -  /  *  % ):\n");
	scanf("%c",&ch);
	printf("enter your numbers:\n");
	scanf("%d %d",&num1,&num2);
	printf("Are you happy to see the result press 1 for yes and 2 for no:\n");
	scanf("%d",&are);

	
	switch (ch)
	{
		case '+':
			printf("%d + %d = %d\n",num1,num2,num1+num2);
		
			switch (are){
				case 1:
					printf("yes i m happy:");
					break;
				case 2:
					printf("no i m not happy:");
					}
			
			break;
			
		case '-':
			printf("%d - %d = %d\n",num1,num2,num1-num2);
			
			switch (are){
				case 1:
					printf("yes i m happy:");
					break;
				case 2:
					printf("no i m not happy:");
					break;
					}
			break;
			
		case '*':
			printf("%d * %d = %d\n",num1,num2,num1*num2);
			
			switch (are){
				case 1:
					printf("yes i m happy:");
					break;
				case 2:
					printf("no i m not happy:");
					break;
					}
			break;
			
		case '/':
			printf("%d / %d = %d\n",num1,num2,num1/num2);
			
			switch (are){
				case 1:
					printf("yes i m happy:");
					break;
				case 2:
					printf("no i m not happy:");
					break;
					}
			break;
		
		case '%':
			printf("%d (mode) %d = %d\n",num1,num2,num1%num2);
			
			switch (are){
				case 1:
					printf("yes i m happy:");
					break;
				case 2:
					printf("no i m not happy:");
					break;
					}
			break;
			
		default:
			printf("invalid");
	}
return 0;	
}
