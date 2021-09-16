/* 4. Write a program which accept temperature in Fahrenheit and convert it into celsius.(1 celsius=(Fahrenheit-32)*(5/9))
	Input:	10								Input:	34
	Output:	-12.2222	(10-32)*(5/9)		Output:1.11111	(34-32)*(5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
	double dTemp=0.0;
	dTemp=((fTemp-32)*5/9);
	return dTemp;
}

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("Enter temperature in Fahrenheit\n");
	scanf("%f",&fValue);
	
	dRet=FhtoCs(fValue);
	
	printf("Temperature in Celcius: %f",dRet);
	
	return 0;
}