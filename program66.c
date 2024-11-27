#include<stdio.h>
int main()
{
    int Arr[4];
    int iCnt=0;
    int iSum=0;

    printf("please enter the values:\n");
    for(iCnt=0;iCnt < 4;iCnt++)
   {
    
     scanf("%d",&Arr[iCnt]);

   } 
  
   for(iCnt=0;iCnt<4;iCnt++)
   {
   iSum=iSum+Arr[iCnt];
   }
    printf("addition is:%d\n",iSum);
    
     
    return 0;
}