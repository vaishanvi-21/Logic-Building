#include<stdio.h>
#include<string.h>

int main ()
{
    char Arr[30];
    int iRet=0;

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlen(Arr);

    printf("string length is :%d\n",iRet);


    return 0;
}