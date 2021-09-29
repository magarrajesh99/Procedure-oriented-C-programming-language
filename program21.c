#include<stdio.h>
#include<stdbool.h>

void Count(char *str)
{
	int cCount=0,sCount=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			cCount++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			sCount++;
		}
		str++;
	}
	printf("Capital letters are:%d\n",cCount);
	printf("Small letters are:%d\n",sCount);
}

int main()
{
	char Arr[20];

	
	printf("Enter character\t");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);

	return 0;
}