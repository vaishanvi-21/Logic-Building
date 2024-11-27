#include<stdio.h>
#include<stdlib.h>
void (int Arr[],int iSize)
{

}


int main()
{
    int iLength=0,iCnt=0;
    int *ptr=NULL;
    printf("Enter the number of element:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));
    printf("enter the element:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

           (ptr,iLength);


    free(ptr);

    return 0;
}