#include<stdio.h>
void display(char *str)
{
    printf("enter string :\n");

    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main ()
{
    char Arr[30];

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    display(Arr);


    return 0;
}