#include<stdio.h>
#include<math.h>

void swap(int *x,int *y);
int main()
{
	int a,b;
	
	printf("enter the x value:\n");
	scanf("%d",&a);
	printf("enter the y value:\n");
	scanf("%d",&b);
	printf("the value of x is %d and y is %d",a,b);
	swap(&a,&b);
	
	return 0;
}

void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	
}
