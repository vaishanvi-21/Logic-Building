#include<stdio.h>
int SumevenDigits(int iNo)
{
    int idigit=0,iSum=0;
    //updtor
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        idigit=iNo%10;
        if(iNo%2==0)
        {
           iSum=iSum+idigit;
        }
        iNo=iNo/10;
    }
    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the value:");
    scanf("%d",&iValue);
    iRet=SumevenDigits(iValue);
    printf(" sum is%d",iRet);

    return 0;
}