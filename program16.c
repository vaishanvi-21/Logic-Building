/*
    START
     accept the percentage from user
     if percentage are less than 40 then display FAIL
     and if it is greater than or equal to 40 then display PASS
    STOP 

*/
#include<stdio.h>
void DisplayResult(float fPercentage)
{
    if(fPercentage>100.0f)//filter
    {
        printf("invaid percentage.please reenter\n");
       
    }
    if(fPercentage>=40.00f)
    {
        printf("you are Pass\n");
    }
    else
    {
        printf("you are fail\n");
    }
}

int main()
{ 
    float fValue=0.0f;
    printf("enter the percentage:\n");
    scanf("%f",&fValue);
    DisplayResult(fValue);

  return 0;
}