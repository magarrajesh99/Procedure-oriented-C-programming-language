#include<stdio.h>
//Input: 3
//
int Addition(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet=Addition(iNo);
	
	printf("Factorial is: %d",iRet);	//Function call
	
	return 0;
}

int Addition(int iValue)		//Defination
{
	int iFact=1,iCnt=0;
	
	if(iValue<0)	//Updator
	{
		iValue=-iValue;
	}
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	
	return iFact;
}