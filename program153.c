#include<stdio.h>
int count(char *ptr)
{   
    int iCount=0;
     while(*ptr !='\0')
     {
        if(*ptr=='a')
        {
        iCount++;
        }
        ptr++;
     }
     return iCount;

}
int main()
{
    char Arr[30];
    char *ptr=Arr;
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);
     
   iRet=count(Arr);
   printf("count of a  is :%d\n",iRet);


   return 0;

}