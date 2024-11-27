#include<stdio.h>
int Countcapital(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str>=65 && *str<=91)
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

    
    iRet=Countcapital(Arr);
    printf("string length is :%d\n",iRet);


    return 0;
}