#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
      //1         2         3
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
    
        printf("%d\t",iCnt);//4
    }

   
    

}
int main()
{   

    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}