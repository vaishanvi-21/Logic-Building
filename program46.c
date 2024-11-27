#include<stdio.h>
//O(N) time complexcity
void displayFactor(int iNo)
{
   int iNo2=0;
   printf("factors are\n");

   for(iNo2=1;iNo2<iNo;iNo2++)
   {
       if(iNo%iNo2==0)
       {
          printf("%d\n",iNo2);
       }
   }
  

}
int main()
{  
    int iValue=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    displayFactor(iValue);
  
    return 0;
}