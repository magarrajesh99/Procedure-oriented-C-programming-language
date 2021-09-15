//Write a program which accept number from user and print even factors of that number on screen.
//Input:	36
//Output:	2	4	6	12	18

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int i=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if((iNo%i==0)&&(i%2==0))
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}