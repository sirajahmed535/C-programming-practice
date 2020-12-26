#include<stdio.h>
#include<math.h>
int isprime(int num);
void checkprime(int lowernum, int uppernum);
int main()
{
	int lowernum,uppernum;
	
	printf("enter the numbers limit:\n");
	scanf("first number %d and the second number %d",&lowernum,&uppernum);
	
	checkprime(lowernum,uppernum);
		
	return 0;
}





//checkprime function
void checkprime(int lowernum, int uppernum)
{
	printf("you entered these numbers %d %d",lowernum,uppernum);
	
	while(lowernum<=uppernum)
	{
	
	if(isprime(lowernum))
	{
		printf("%d",lowernum);
	}
	lowernum++;
	}
}



//isprime function
int isprime(int num)
{
	int i;
	
	for(i=2;i<=num/2;i++)
	{
		
		
		if(num%i==0)
		{
			return 0;
		}
		
	}
	return 1;
}
