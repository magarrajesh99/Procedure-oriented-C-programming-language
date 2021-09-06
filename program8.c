#include<stdio.h>

void Display(int);

int main()
{
	int iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	Display(iNo);		//Function call
	
	return 0;
}

void Display(int iValue)		//Defination
{
	int i=0;
	if(iValue==0)			//Filter
	{
		printf("Your entered number is 0");
		return;
	}
	
	if(iValue<0)				//Input updator
	{
		iValue=-iValue;
	}
	
	for(i=1;i<=iValue;i++)
	{
		printf("%d\n",i);
	}
}