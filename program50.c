#include<stdio.h>
#include<stdbool.h>
//O(N/2) time complexcity
bool  CheckPerfect(int iNo)
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
   if(iSum==iNo)
   {
    return true;

   }
   else
   {
    return false;
   }
  

}
int main()
{  
    int iValue=0;
    bool bRet=false;
    printf("enter the number:\n");
    scanf("%d",&iValue);
   bRet=CheckPerfect(iValue);
   if(bRet==true)
   {
    printf("%d is a perfect number\n",iValue);

   }
   else
   {
    printf("%d is not a perfect number\n",iValue);
   }
  
    return 0;
}