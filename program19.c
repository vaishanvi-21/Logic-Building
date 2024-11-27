#include<stdio.h>
void Displaytimetable(int iStd)
{
    if(iStd==8)
    {
        printf("your exam is at 9.30am\n");
    }
    else if(iStd == 9)
    {
        printf("your exam is at 10.30am\n");
    }
     else if(iStd == 10)
    {
        printf("your exam is at 11.30am\n");
    }
   
}
int main()
{
    int iValue=0;
    printf("please enter your standard:\n");
    scanf("%d",&iValue);
    Displaytimetable(iValue);
    return 0;
}