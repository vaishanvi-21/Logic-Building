#include<stdio.h>
void Display(int iNo)

{
    int iCnt=0;
     char ch ='a';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
  
    {
        printf("%c\t",ch);
       
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}