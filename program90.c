/* 5. Accept N numbers from user and display summation of digits of each numbers.
	Input:	N	6
			Elements:8225	665	3	76	953	858
	output:	17	17	3	13	17	21
*/


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
	int i=0,iDigit=0,iNo=0,iSum=0;
	for(i=0;i<iLength;i++)
	{
		iNo=Arr[i];
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
		}
	printf("%d\t",iSum);
		iSum=0;
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