#include<stdio.h>
#include<stdbool.h>

char SmallToCapital(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		return ch-32;
	}
}

int main()
{
	char cValue='\0',cRet='\0';
	
	printf("Enter character");
	scanf("%c",&cValue);
	
	cRet=SmallToCapital(cValue);
		printf("Capital letter is:%c\t",cRet);
		
	return 0;
}