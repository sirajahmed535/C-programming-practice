#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number which you want to multiply:\n");
	scanf("%d",&a);
	
	printf("Table of: %d\n",a);
	
	for(b=0;b<=10;b++){
		printf("%d*%d=%d\n",a,b,a*b);
	}
	return 0;
}
