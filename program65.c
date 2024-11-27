#include<stdio.h>
int main()
{
    int Arr[4];
    int iCnt=0;
    int iNo=0;

    printf("please enter the values:\n");
    for(iCnt=0;iCnt<4;iCnt++)
   {
    
     scanf("%d\n",&Arr[iCnt]);

   }  
  
   printf("values from the array are:\n");
   
   for(iCnt=0;iCnt<4;iCnt++)
   {
    
     printf("%d\n",Arr[iCnt]);

   }   
    return 0;
}