#include<iostream>
using namespace std;
int Addition(int iValue1,int iValue2)
{
    int result=0;
    result=iValue1+iValue2;
    return result;
}
int main()
{
    int iNo1=0,iNo2=0,iAns=0;
     
     cout<<"enter the first number\n";
     cin>>iNo1;

     cout<<"enter the first number\n";
     cin>>iNo2;
     
     iAns=Addition(iNo1,iNo2);
     cout<<"addition is"<<iAns<<"\n";
     return 0;

}