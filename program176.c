#include<stdio.h>
#include<stdbool.h>

bool Count(char *str,char ch)
{   
    int icnt=0;
    bool bFlag=false;
    while(*str!='\0')
    {
        if(*str== ch )
        {
          bFlag=true;
          break;
        }
    
        str++;
    }
    return bFlag;
}

int main ()
{
    char Arr[30];
    bool iRet=false;
    char cValue='\0';

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);
   
    printf("enter character:\n");
    scanf(" %c",&cValue);

    
    iRet=Count(Arr,cValue);
    if(iRet==true)
    {
        printf("true\n");

    }
    else
    {
        printf("false\n");
    }

  


    return 0;
}
