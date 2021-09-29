#include<stdio.h>

void Display(char Brr[50])
{
	printf("Name is: %s\n",Brr);
}
int main()
{
	char Arr[50];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}