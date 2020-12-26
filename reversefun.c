#include<stdio.h>
#include<math.h>
int stor = 0;
int reversefunc(int n);
int main()
{
	int num,c;
	printf("Enter the number:\n");
	scanf("%d",&num);
	c=reversefunc(num);
	printf("%d\n",c);
	return 0;
}

int reversefunc(int n)
{
	int reminder;
	while(n>0)
	{
		reminder=n%10;
		stor = stor * 10 + reminder;
		n=n/10; 
		
	}
	printf("%d\n",stor);
	return stor;
}
