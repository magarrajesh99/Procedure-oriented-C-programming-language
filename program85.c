/* 5. Accept N numbers from user and return product of all odd elements.
	Input:	N	6
			Elements:15	66	3	70	10	88
	output:	45
	Input:	N	6
			Elements:44	66	72	70	10	88
	output:	0
*/


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int i=0,iTemp=0;
	for(i=0;i<iLength;i++)
	{
		
		if(Arr[i]>Arr[i+1])
		{
			iTemp=Arr[i];
			Arr[i]=Arr[i+1];
			Arr[i+1]=iTemp;
			
		}
		
	}
	return iTemp;
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
	iRet=Product(p,iSize);
		
	printf("Product is %d",iRet);
	
	free(p);
	
	return 0;
}