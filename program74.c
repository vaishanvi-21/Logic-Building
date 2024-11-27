#include<stdio.h>
#include<stdlib.h>

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

    printf("value of the array is:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }



    free(ptr);

    return 0;
}