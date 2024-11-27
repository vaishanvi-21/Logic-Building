#include<stdio.h>
int revernumber(int iNo)
{
    int idigit=0,iRev=0;
    //updtor
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        idigit=iNo%10;
        iRev=iRev*10+idigit;
        iNo=iNo/10;
    }
    return iRev;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the value:");
    scanf("%d",&iValue);
    iRet=revernumber(iValue);
    printf(" sum is%d",iRet);

    return 0;
}