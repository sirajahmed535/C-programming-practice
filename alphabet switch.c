#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("This is the vowel character %c",ch);
			break;
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
			printf("This is the non-vowel character %c",ch);
			break;
		default:
			printf("your input is invalid:");	
			break;
	}
	return 0;
}
