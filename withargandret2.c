//with argument and with return 
#include<stdio.h>
int sum(int x,int y)
{
	x=x+y;
	return(x);
}
int main()
{
	int result,x,y;
	x = 4;
	y = 5;
	result = sum(x,y);
	printf("%d",result);
	
	return 0;
}
