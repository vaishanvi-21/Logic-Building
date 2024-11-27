#include<stdio.h>
 /// // /////////////////////////////////////////////////
 /// function name:  Addition
 /// description:    It is used to perform addition of 2 float values
 /// input:          Float,Float
 /// output:         Float
 /// author0:        Vaishnavi Bhalchandra Salunkhe
 /// date:           06/10/2024 
 ////////////////////////////////////////////////////////
 float addition(float fValue1,float fValue2)
 {
    float fAdd=0.0f;                        //local variable for result
    fAdd=fValue1+fValue2;                   // business logic
    return fAdd;
 }
 /// //////////////////////////////////////////////////////////
 /// This  application is used to perform addition of 2 number
 /////////////////////////////////////////////////////////////
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

