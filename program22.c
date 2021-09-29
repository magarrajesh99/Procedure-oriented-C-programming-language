#include<stdio.h>
#include<stdbool.h>

int SpaceCount(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20],iRet=0;

	
	printf("Enter character\t");
	scanf("%[^'\n']s",Arr);
	
	iRet=SpaceCount(Arr);
	printf("Spaces are: %d\t",iRet);
	return 0;
}