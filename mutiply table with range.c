#include<stdio.h>
int main()
{
	int a,b,range;
	printf("Enter the number which you want to multiply:\n");
	scanf("%d",&a);
	
	printf("Table of: %d\n",a);
	printf("Enter the range of multiplication:\n");
	scanf("%d",&range);
	
	for(b=0;b<=range;b++){
		printf("%d*%d=%d\n",a,b,a*b);
	}
	return 0;
}
