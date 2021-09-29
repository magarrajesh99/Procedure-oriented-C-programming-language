#include<stdio.h>
#include<stdbool.h>

int  SmallCount(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	
	iRet=SmallCount(Arr);
	printf("Small character is:%d\t",iRet);
		
	return 0;
}