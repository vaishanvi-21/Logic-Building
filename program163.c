#include<stdio.h>
int strlenX(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        str++;
        icnt++;
    }
    return icnt;
}

int main ()
{
    char Arr[30];
    int iRet=0;

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    
    iRet=strlenX(Arr);
    printf("string length is :%d\n",iRet);


    return 0;
}