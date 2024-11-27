#include<stdio.h>


int CountVowels(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
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

    
    iRet=CountVowels(Arr);
    printf("string length is :%d\n",iRet);


    return 0;
}
