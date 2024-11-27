#include<stdio.h>
int main ()
{
    char Arr[30];

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the name %s\n",Arr);


    return 0;
}