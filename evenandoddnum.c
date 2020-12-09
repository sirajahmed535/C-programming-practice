#include<stdio.h>
//program of print the even and odd numbers

int main()
{
	int b;
	printf("Enter the number:\n");
	scanf("%d",&b);
	
	if(b%2==0)
{
	printf("this is the even number: %d",b);
}
else{
	printf("this is odd number %d",b);
}
return 0;
}
