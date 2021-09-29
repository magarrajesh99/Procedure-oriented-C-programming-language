/* 4. Accept N numbers from user and display all such numbers which contains 3 digits in it.
	Input:	N	6
			Elements:8225	665	3	76	953	858
	output:	665	953	858
*/


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
	int i=0,iDigit=0,iNo=0,iCnt=0;
	for(i=0;i<iLength;i++)
	{
		iNo=Arr[i];
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iNo=iNo/10;
			iCnt++;
			
		}
		if(iCnt==3)
		{
			printf("%d\t",Arr[i]);
		}
		iCnt=0;
	}
	
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
	Digits(p,iSize);

	free(p);
	
	return 0;
}