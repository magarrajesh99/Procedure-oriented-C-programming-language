/* 3. Write a program which accept number from user and return addition of all numbers in between that range.(Range should contains positive numbers only)
	Input:	23	30
	Output:	212
	
	Input:	10	18
	Output:	126
	
	Input:	-19	2
	Output:	Invalid Range
	
	Input:	90	18
	Output:	Invalid Range
*/

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;
	
	if(iStart>iEnd||iStart<0)
	{
		return 1;
	}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)			//O(N) where N is the value of iEnd
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter Starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending point\n");
	scanf("%d",&iValue2);
	
	iRet=RangeSum(iValue1,iValue2);
	
	printf("Addition is: %d",iRet);

	return 0;
}