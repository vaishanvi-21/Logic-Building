#include<stdio.h>
#include<stdlib.h>
int Addition(int Arr[],int iSize)
{ 
  int iCnt=0,iSum=0;
 for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;


}


int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    printf("Enter the number of element:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));
    printf("enter the element:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Addition(ptr,iLength);
    printf("addition of number:%d\n",iRet);

    free(ptr);

    return 0;
}