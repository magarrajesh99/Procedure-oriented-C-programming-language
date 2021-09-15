////////////////////////////////////////////////////////
//
//Function name:	Addition
//Input:			Integer,Integer
//Output:			Integer
//Description:		It is used to add 2 numbers
//Author:			Nilam Shivaji Sathe
//Date:				31/08/2021
//
/////////////////////////////////////////////////////////

/*
Algorithm

START
	Accept first number as No1
	Accept second number as No2
	Perform addition of No1 and No2
	Store the result in Ret
	Return the value of Ret
	STOP
*/
#include "Header.h"
int Addition(
				int iNo1,	//First input argument
				int iNo2	//Secont input argument
			)
{
	int iResult=0;		//Local variable to store result
	
	iResult=iNo1+iNo2;
	
	return iResult;		//Return the value to the caller
}