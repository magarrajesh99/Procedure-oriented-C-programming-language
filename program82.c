/* 2. Accept N numbers from user and accept one another number as NO, return index of first occurance of that NO.
	Input:	N 	6
			NO	66
			Elements: 85	66	3	66	93	88
	Output:	1
	Input:	N 	6
			NO	12
			Elements: 85	11	3	15	11	111
	Output:-1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int iNo)
{	
	int i=0,iCnt=0,pos=-1;
	
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			pos=i;
			break;
		}
	
	
	}
	return pos;
	
}

int main()
{
	int iSize=0,iCnt=0,iValue=0,iRet=0;
	int *p=NULL;

	
	printf("Enter numbers of elements");
	scanf("%d",&iSize);
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	p=(int *)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements\t\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element :%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=FirstOcc(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("%d ",iRet);
	}

	else
		{
		printf("%d",iRet);
	}
	free(p);
	return 0;
}