#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter character");
	scanf("%c",&cValue);
	
	bRet=CheckCapital(cValue);
	if(bRet==true)
	{
		printf("It is capital\n");
	}
		else
		{
			printf("It is not a capital\n");
		}
	
	return 0;
}