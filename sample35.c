/* 5. Write a program which accept area in square feet and convert it into square meter.(1 square feet=0.0929 Square meter)
	Input:	5						Input:	7
	Output:	0.464515				Output:	0.650321
*/
#include<stdio.h>

#define meter 0.09290304 

double SquareMeter(int iNo)
{
	double Area=0.0;
	Area=iNo*meter;
	return Area;	
}

int main()
{
	int iValue=0;
	double dRet=0.0;
	
	printf("Enter Area in square feet\n");
	scanf("%d",&iValue);
	
	dRet=SquareMeter(iValue);
	
	printf("Conversion in Square Meter: %f\n",dRet);
	
	return 0;
}