/* 3. Accept N numbers from user and return the difference between largest and smallest number.
	Input:	N	6
			Elements:85	66	3	66	93	88
	output:	90(93-3)
*/


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int i=0,iTemp1=0,iTemp2=0,iTemp3=0,j=0;
	for(i=0;i<iLength;i++)
	{
		
		if(Arr[i]>Arr[i+1])
		{
			iTemp1=Arr[i];
			Arr[i]=Arr[i+1];
			Arr[i+1]=iTemp1;
			
		}
		
	}
	iTemp1=Arr[iLength-1]-Arr[0];
	return iTemp1;
	
}

int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;
	
	printf("Enter the elements");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("\nEnter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("\nEnter element  ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p,iSize);

	printf("Difference is %d",iRet);
	
	free(p);
	
	return 0;
}