#include<stdio.h>
#include<stdbool.h>

int  CapitalCount(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter character\t");
	scanf("%[^'\n']s",Arr);
	
	iRet=CapitalCount(Arr);
	printf("Capital character is:%d\t",iRet);
		
	return 0;
}