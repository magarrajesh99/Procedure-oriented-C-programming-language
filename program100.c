/*	5. Accept character from user and display its ASCII value in decimal,Octal and hexadecimal format.
	Input:	A
	Output:	Decimal	65
			Octal	0101
			Hexadecimal	0X41
	
*/
#include<stdio.h>

void Display(char ch)
{
	printf("Decimal:\t%d\n",ch);
	printf("Octal:\t%o\n",ch);
	printf("Hexadicimal:\t0X%x\n",ch);
}

int main()
{
	char cValue='\0';

	printf("Enter the character\t");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}