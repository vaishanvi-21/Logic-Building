#include<stdio.h>
int OddDigits(int iNo)
{    int iDigit=0;
     int count=0;
    //updator
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)//idigit%2==1
        {
        count++;
        }
        iNo=iNo/10;
        
        
    }
    return count;
}
int main()
{
    int iValue=0;
    int iValue1=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iValue1=OddDigits(iValue);
    printf("value is :%d\n",iValue1);
   

}