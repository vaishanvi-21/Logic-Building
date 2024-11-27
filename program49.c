#include<stdio.h>
//O(N/2) time complexcity
int sumFactor(int iNo)
{
   int iNo2=0;
   int iSum=0;
   

   for(iNo2=1;iNo2<=iNo/2;iNo2++)
   {
       if(iNo%iNo2==0)
       {
          iSum=iSum+iNo2;
       }
   }
   return iSum;

}
int main()
{  
    int iValue=0,iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    iRet=sumFactor(iValue);
    printf("enter sum %d",iRet);
  
    return 0;
}