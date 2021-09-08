#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int);

int main()
{
	int iNo=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	bRet=CheckEven(iNo);
	
	if(bRet==true)
	{
		printf("%d number is even",iNo);
	}
	else
	{
		printf("%d number is not even",iNo);
	}
}

bool CheckEven(int iValue)
{
	if((iValue%2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}