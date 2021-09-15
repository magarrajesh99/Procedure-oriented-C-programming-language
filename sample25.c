/*	5. Write a program which accept number from user and count frequency of such a digit which are less than 6.
	Input:	2395				Input:	1018
	Output:	3					Output:	3
	
	Input:	9440				Input:	96672
	Output:	3					Output:	1
*/

#include<stdio.h>

int Count(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo<0)			//Input Updator
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)		//O(N)
	{
		iDigit=iNo%10;
		if(iDigit<6)
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
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}