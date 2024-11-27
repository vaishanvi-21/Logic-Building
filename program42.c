#include<stdio.h>
 void  display (iNo)
 {
    iNo=0;
    
    for(iNo=1;iNo<=10;iNo++)
    {
        printf("%d\n",iNo++);
    }
 }
int main()
{ 
   int  iCnt=0;
    printf("enter the number");
    scanf("%d",&iCnt);
    display(iCnt);
    return 0;
}