#include<stdio.h>
//ATM program

int main()
{
	int password;
	int amount;
	int note;
	printf("Please check my ATM:\n\n");
	printf("enter your password:\n");
	scanf("%d",&password);
	
	if(password==12345)
	{
		printf("enter the amount:\n");
		scanf("%d",&amount);
		
		if(amount<=20000)
		{
			printf("you can easily access this money what you want 500 or 1000 notes:\n");
			scanf("%d",&note);
			
			if(note==500)
			{
				printf("you got %d in 500 notes",amount);
							
			}
			else if(note==1000)
			{
				printf("you got %d in 1000 notes",amount);
			}
			else if(note==5000)
			{
				printf("5000 notes is finished");
			}
			else
			{
				printf("your input invalid");
			}
		}		
				else
				{
					printf("sorry you can only access 20000 limit money");
				}
	}
	else
	{
		printf("invalid password");
	}
	return 0;
	
}
