#include<stdio.h>
void display(int iNO1)
{  
    int  iCnt=0;
    for(iCnt=iNO1;iCnt>=1;iCnt--)
    {
        printf(" %d\n",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("the enter value\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}