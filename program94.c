/* 4. Accept character form user and chaeck whether it is small case or not(a-z).
	Input:	g
	Output:	TRUE
	Input:	D
	Output:	FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
	
	if((ch>='a')&&(ch<='z'))
	{
		return 1;
	}
}

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("Enter the character\t");
	scanf("%c",&cValue);
	
	bRet=ChkSmall(cValue);
	if(bRet==TRUE)
	{
		printf("It is Small case Character");
	}
	else
	{
		printf("It is not a Small case Character");
	}
	return 0;
}