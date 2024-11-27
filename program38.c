#include<stdio.h>
void display(int iNO1)
{  
    int  iCnt=0;
    iCnt=1;
    while(iCnt<=iNO1)
    {
        printf(" jay ganesh %d\n",iCnt);
        iCnt++;
    }
}    
int main()
{
    int iFal=0;
    printf("enter the value\n");
    scanf("%d",&iFal);
    display(iFal);
   
    return 0;
}
