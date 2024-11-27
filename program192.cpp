#include<iostream>
using namespace std;
class Array
{
    public:
      int *Arr;
      int iSize;
       Array(int A)  
     {
       iSize=A;
       Arr=new int[iSize];
     } 
     ~Array()
     {
        delete[]Arr;
     }
      void Accept() 
     {
        int iCnt=0;
     cout<<"Enter the values:\n";
      for(iCnt=0;iCnt<iSize;iCnt++)//logic (function)
      {
        cin>>Arr[iCnt];
    
      } 
     }
        void Display()
       {
         int iCnt=0;
         cout<<"values from array:\n";
         for(iCnt=0;iCnt<iSize;iCnt++)//logic(function)
         {
          cout<<Arr[iCnt]<<"\n";
         }
        }
       int CountEven()
       {
        int iCnt=0,icount=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                icount++;
            }
        }

       }  
    

};
int main()
{
    int iLength=0,iRet=0;
    //data(characteristics)

    cout<<"Enter number of elements that you want to store:\n";
    cin>>iLength;

     //resource allocation
    //arr=(int *)malloc(sizeof(int)*ilength);
   
  Array aobj(iLength);
   aobj.Accept();
   aobj.Display();

   iRet=aobj.CountEven();
   cout<<aobj.CountEven<<"\n";
   
   
    
    return 0;
}