#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Name[]={'M','u','m','b','a','i','\0'};
    printf("%s\n",Name);//100

    printf("%c\t",Name[0]);
    printf("%c\t",Name[1]);
    printf("%c\t",Name[2]);
    printf("%c\t",Name[3]);

    return 0;
}