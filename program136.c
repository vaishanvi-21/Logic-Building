#include<stdio.h>
void Display(int Row,int iCol)


{
   int i=0,j=0;
   char ch='a';

   if(Row!=iCol)
   {
    printf("invalid number");
    return ;
   }
   for(i=1;i<=Row;i++)
   {
    for(j=1,ch='a';j<=iCol;j++)
    {    
        if(i==j)
        {
          printf("*\t");  
        }
        else{
        printf("%c\t",ch);
        }
        ch++;
    }
    printf("\n");
   
   }

}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter number :\n");
    scanf("%d",&iValue1);
   printf("enter number :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}