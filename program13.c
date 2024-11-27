/*
  START
    accept the total marks
    accept the obtained marks
    calculate the percentage as (obtained/total)*100
    display the calculated percentage
  STOP
*/
#include <stdio.h>
float calculated (int ino1,int iTotal)
{
    float fmarks=0.0f;
    fmarks=((float)ino1/(float)iTotal)*100;
    return fmarks;

}
int main()
{
    int iValue1=0,iValue2=0;
    float fResult=0.0f;
    printf("enter your marks\n");
    scanf("%d",&iValue1);
    printf("outof your marks\n");
    scanf("%d",&iValue2);
    fResult=calculated(iValue1,iValue2);

    printf("percentage is:%f\n",fResult);
    return 0;
}
