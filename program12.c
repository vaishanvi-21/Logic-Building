#include<stdio.h>
float circlearea(float fNO1)
{
   float fResult =0.0f; 
    fResult=3.14*fNO1*fNO1;
    return fResult;
}
int main()
{
    float fradius=0.0f;
    float fArea=0.0f;
    printf("Enter the radius of circle\n");
    scanf("%f",&fradius);
    fArea=circlearea(fradius);
    //3.14*10.5*10.5;
    printf("area of circle is:%f\n",fArea);
    return 0;
}
