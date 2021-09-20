
//Input:6

//Output:* # * # * #

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		
			printf("*\t#\t");

			
		
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}