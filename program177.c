#include<stdio.h>


void update(char *str)
{   
  while(*str!='\0')
  {
    if(*str=='a')
    {
        *str='d';
    }
    str++;
  }
}

int main ()
{
    char Arr[30];
    

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);
   
    update(Arr);
    printf("string after updation is:%s\n",Arr);
  
    return 0;
}
