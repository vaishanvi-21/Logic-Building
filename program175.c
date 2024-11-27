#include<stdio.h>

int Count(char *str,char ch)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str== ch )
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}

int main ()
{
    char Arr[30];
    int iRet=0;
    char cValue='\0';

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);
   
    printf("enter character:\n");
    scanf(" %c",&cValue);

    
    iRet=Count(Arr,cValue);
    printf("number is :%d\n",iRet);


    return 0;
}
