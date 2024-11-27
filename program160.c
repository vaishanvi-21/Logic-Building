#include<stdio.h>
void display(char *str)
{
    int i=0;
    printf("enter string :\n");

   for(i=0;str[i]!='\0';i++)
    {
        printf("%c\n",str[i]);
        
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