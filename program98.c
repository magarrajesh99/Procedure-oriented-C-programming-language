/*	3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small than print all the character in reverse order till a. In other cases return directly.
	Input:	Q
	Output:	Q	R	S	T	U	V	W	X	Y	Z
	Input:	m
	Output:	m	l	k	j	i	h	g	f	e	d	c	b	a
	Input:	8
	Output:
	
*/
#include<stdio.h>

void Display(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
	{
		while(ch<='Z')
		{
			printf("%c\t",ch);
			ch++;
		}
		while(ch>='a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
}

int main()
{
	char cValue='\0';
	
	printf("Enter the character\t");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}