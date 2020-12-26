//without argument and with return
#include<stdio.h>
#include<math.h>

int k_stole()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	n=n*n;
	return n;
}
int main()
{
	int c;
	c=k_stole();
	printf("%d",c);
	return 0;
	
	
}

