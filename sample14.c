//Accept one character from user and convert case of that character.
//Input:    a	Output:	A
//Input:	D	Output:	d

#include<stdio.h>

void DisplayConvert(char cValue)
{
	if((cValue>=96)&&(cValue<=122))
	{
		printf("%c",(cValue-32));
	}
	else if((cValue>=65)&&(cValue<=90))
	{
		printf("%c",(cValue+32));
	}
	
}
int main()
{
	char cValue='\0';
	
	printf("Enter character\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}
