#include<stdio.h>


void strlwrX(char *str)
{   
  while(*str!='\0')
  {
    if(*str>='a'&&*str<='z')
    {
        *str=*str-32;
    }
    str++;
  }
}

int main ()
{
    char Arr[30];
    char ch='\0';
    

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    //printf("enter string:\n");
    //scanf(" %c",&ch);




   
    strlwrX(Arr);
    printf("string after updation is:%s\n",Arr);
  
    return 0;
}
