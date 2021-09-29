#include<stdio.h>
#include<stdbool.h>

char CharToggle(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return ch+32;
	}
	else if((ch>='a')&&(ch<='z'))
	{
		return ch-32;
	}
}

int main()
{
	char cValue='\0',cRet='\0';
	
	printf("Enter character\t");
	scanf("%c",&cValue);
	
	cRet=CharToggle(cValue);
	printf("Toggle letter is:%c\t",cRet);
		
	return 0;
}