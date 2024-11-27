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

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    
    iRet=Count(Arr,'m');
    printf("number is m:%d\n",iRet);


    return 0;
}
