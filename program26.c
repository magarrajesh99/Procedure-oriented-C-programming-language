/*	1. Write a program which accept number from user and return the count of even digit.
	Input:	2395				Input:	1018
	Output:	1					Output:	2
	
	Input:	-1018				Input:	8462
	Output:	2					Output:	4
*/

#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo<0)			//Input Updator
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)			//O(N)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);
	
	printf("%d",iRet);
	
	return 0;
}