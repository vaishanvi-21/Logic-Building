#include<stdio.h>
int Countspace(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
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

    
    iRet=Countspace(Arr);
    printf("string length is :%d\n",iRet);


    return 0;
}