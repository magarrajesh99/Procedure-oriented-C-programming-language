/*	4. Write a program which accept number from user and return multiplication of all digits.
	Input:	2395				Input:	1018
	Output:	270					Output:	8
	
	Input:	9440				Input:	922432
	Output:	144					Output:	864
*/
#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0,iMult=1;
	
	if(iNo<0)			//Input Updator
	{
		iNo=-iNo;
	}
	while(iNo!=0)			//O(N)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			iDigit=iDigit+1;	
		}
		iMult=iDigit*iMult;
		iNo=iNo/10;
	}
	return iMult;
} 

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("%d",iRet);
	
	return 0;
}