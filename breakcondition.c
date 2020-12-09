#include<stdio.h>
// break statement loop program
int main()
{
	int i,number,count=0;
	
	for(i=0;i<=10;i++){
		printf("this is the loop iteration %d\n\n",i);
		
		printf("enter the positive number if you entered the negative number the loop will be terminated :\n");
		scanf("%d",&number);
		
		if(number < 0)
		{
			break;
		}
		count=count+number;
	}
	printf("the result is: %d",count);
	return 0;
}
