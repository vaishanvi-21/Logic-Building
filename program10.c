
/*
step1: understand the problem statment
step2: write the algorithm
step3: decide the programming language
step4: write the program
step5: test the program

*/
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
    float fAdd=0.0f; //local variable for result
    //updtor
    if(fValue1<0.0f) 
    {
      fValue1=-fValue1;
    } 

    if(fValue2<0.0f) 
    {
      fValue2=-fValue2;
    }  

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
/*
   step 5:test cases
   C:\Users\Vaishnavi Salunkhe\Desktop\LB>gcc program10.c -o myexe
 test case1:
C:\Users\Vaishnavi Salunkhe\Desktop\LB>myexe.exe
enter the first number
21
enter the second number
21
addition is:42.000000

C:\Users\Vaishnavi Salunkhe\Desktop\LB>gcc program10.c -o myexe
test case2:
C:\Users\Vaishnavi Salunkhe\Desktop\LB>myexe.exe
enter the first number
10.5
enter the second number
32.0
addition is:42.500000

C:\Users\Vaishnavi Salunkhe\Desktop\LB>gcc program10.c -o myexe
test case3:
C:\Users\Vaishnavi Salunkhe\Desktop\LB>myexe.exe
enter the first number
-10.5
enter the second number
32.0
addition is:21.500000

C:\Users\Vaishnavi Salunkhe\Desktop\LB>gcc program10.c -o myexe
test case4:
C:\Users\Vaishnavi Salunkhe\Desktop\LB>myexe.exe
enter the first number
32.0
enter the second number
-23.1
addition is:8.900000

C:\Users\Vaishnavi Salunkhe\Desktop\LB>
*/
