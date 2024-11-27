#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Arr[30];

    printf("Enter your name:\n");
    scanf("%[^'\n']s",Arr);//ACCEPTs TILL FIRST SPACE ONLY

    printf("your name is :%s\n",Arr);
    

    return 0;
}