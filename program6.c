/*
 step1: understand the problem statment
 step2: write the algorithm
 step3: decide the programming language
 step4: write the program
 step5: test the program

*/
/*
  problem statement:
  write a program which is used the perform ADDITION of two number.
*/
/*
  step1: understand the problem statement
  user is going to enter data in decimal format.
  if entered data is negative we have to convert it to positive value.

*/
/*
   START
        Accept first input
        Accept second input
        if any of the input is negative then convert it into positive
        perform the addition of that accepted values
        display the addition
   STOP
*/
/*
   STEP3: decide the programming language 
   according to the problem statement  we select c program

*/
  /*
    step: write a program
  */
 #include<stdio.h>
 int main()
 { 
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;
     printf("enter the first number\n");
     scanf("%f",&fNo1);
     printf("enter the second number\n");
     scanf("%f",&fNo2);
     fAns=fNo1+fNo2;
     printf("addition is:%f\n",fAns);

    return 0;
 }

