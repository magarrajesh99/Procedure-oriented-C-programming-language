/* 2. Accept character form user and check whether it is capital or not(A-Z).
	Input:	F
	Output:	TRUE
	Input:	d
	Output:	FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	
	if((ch>='A')&&(ch<='Z'))
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
	
	bRet=ChkCapital(cValue);
	if(bRet==TRUE)
	{
		printf("It is Capital Character");
	}
	else
	{
		printf("It is not a Capital Character");
	}
	return 0;
}