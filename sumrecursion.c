//recursion function sum natural program  
#include<stdio.h>
int fact(int n);
int sum = 0;
int main ()
{
	int num,result;
	printf("enter the number:\n");
	scanf("%d",&num);
	result = fact(num);
	printf("%d",result);
	return 0;
}

int fact(int n)
{
	int i;
	for(i=1;i<=n;i++){
	sum+=i;
	}
	return sum;

}
