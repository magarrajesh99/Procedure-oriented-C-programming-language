
//Input:	5
//Output:	a 	b  c  d  e

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	char ch='\0';
	
	for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\n",ch);
		
	}
	
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}