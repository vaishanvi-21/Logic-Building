#include<stdio.h>
void display(int iValue)
{
    int icnt=0;
    for(icnt=1;icnt<=iValue;icnt++)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
  
    int iFrequency=0;
    printf("enter the frequency:\n");
    scanf("%d",&iFrequency);
    display(iFrequency);
    return 0;
}