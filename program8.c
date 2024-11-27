#include<stdio.h>
 float addition(float fValue1,float fValue2)
 {
    float fAdd=0.0f;                        //local variable for result
    fAdd=fValue1+fValue2;                   // business logic
    return fAdd;
 }
 
 int main()
 { 
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;
     printf("enter the first number\n");
     scanf("%f",&fNo1);
     printf("enter the second number\n");
     scanf("%f",&fNo2);
     fAns=addition(fNo1,fNo2);
     printf("addition is:%f\n",fAns);

    return 0;
 }

