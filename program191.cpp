#include<iostream>
using namespace std;
int main()
{
    int iLength=0,iCnt=0;
    int *Arr=NULL;//data(characteristics)

    cout<<"Enter number of elements that you want to store:\n";
    cin>>iLength;

    Arr=new int[iLength];//resource allocation
    //arr=(int *)malloc(sizeof(int)*ilength);

    cout<<"Enter the values:\n";
    for(iCnt=0;iCnt<iLength;iCnt++)//logic (function)
    {
        cin>>Arr[iCnt];
    }
    cout<<"values from the array:\n";
    for(iCnt=0;iCnt<iLength;iCnt++)//logic(function)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    delete[]Arr;//dellocation

    return 0;
}