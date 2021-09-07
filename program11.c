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
	
	printf("Addition is: %d",iRet);	//Function call
	
	return 0;
}

int Addition(int iValue)		//Defination
{
	int iSum=0,iCnt=0;
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	
	return iSum;
}