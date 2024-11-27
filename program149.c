#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Arr[30];
    char *ptr=Arr;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);//ACCEPTs TILL FIRST SPACE ONLY

    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
     
     
      

    

    return 0;
}