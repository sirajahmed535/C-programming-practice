#include<stdio.h>
//loop exercise program if else if ladder program
int main()
{
	int maths ;
	int science ;
	printf("Enter which paper you have passed:\n\n");
	printf("please enter first maths and then science numbers:\n\n");
	scanf("%d %d",&maths,&science);
	
	if((maths>=35) && (science<35))
	{
		printf("You are pass in maths and your gift is 15 and sorry you are failed in science:\n");
	}
	else if((maths<35) && (science>=35))
	{
		printf("Sorry you are failed in maths and pass in science so your gift is 15 and :\n");
	}
	else if((maths>=35) && (science>=35))
	{
		printf("You pass both maths and science so your gift is 45");
	}
	else if((maths<35) && (science<35))
	{
		printf("You are fail in both papers so no gift sorry:");
	}
	else
	{
		printf("you are not pass in any paper");
	}
	return 0;
}

