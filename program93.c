/* 3. Accept character form user and chaeck whether it is digit or not(0-9).
	Input:	7
	Output:	TRUE
	Input:	d
	Output:	FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	
	if((ch>='0')&&(ch<='9'))
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
	
	bRet=ChkDigit(cValue);
	if(bRet==TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not a Digit");
	}
	return 0;
}