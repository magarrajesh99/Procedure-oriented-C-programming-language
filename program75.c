/* 4. Accept N numbers from user and display all such elements which are multiples of 11.
	Input:	N:	6
			Elements:	85	66	3	55	93	88
	Output:	15
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0,iSum1=0,iSum2=0;
	
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%11==0))
		{
			printf("%d\t",Arr[i]);
		}
	}
	
}
int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize*(sizeof(int)));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements:%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	Display(p,iSize);
	free(p);
	return 0;
}