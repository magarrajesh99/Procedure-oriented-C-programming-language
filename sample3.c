//3.Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
	int i=0;
 	i=5;
	for(int j=1;j<=i;i=i-2)
	{
		printf("%d",i);
		i++;
	}
}
int main()
{
	Display();
	
	return 0;
}
