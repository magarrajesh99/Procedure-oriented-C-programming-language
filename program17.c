#include<stdio.h>
#include<stdbool.h>

char CapitalToSmall(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return ch+32;
	}
}

int main()
{
	char cValue='\0',cRet='\0';
	
	printf("Enter character");
	scanf("%c",&cValue);
	
	cRet=CapitalToSmall(cValue);
		printf("Small letter is:%c\t",cRet);
		
	return 0;
}