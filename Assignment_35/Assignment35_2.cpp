#include<iostream>
using namespace std;
typedef unsigned int UINT;

void CommonBits(int iNo1 , int iNo2)
{
    int iCount1 = 0, iCount2 = 0 ;

    while( iNo1 > 0 )
    {

        if(iNo1 & 1)
        {
            iCount1 ++;
        }

        iNo1 = iNo1 >> 1;
    }
    
    while( iNo2 > 0 )
    {
        if(iNo2 & 1)
        {
            iCount2 ++;
        }

        iNo2 = iNo2 >> 1;
    }

    cout<<"Output1 : "<<iCount1<<"\n";
    cout<<"Output2 : "<<iCount2<<"\n";
}

int main()
{
    int iRet = 0, iValue1 = 0, iValue2 = 0 ;
 
    cout<<"Enter the first number : ";
    cin>>iValue1;

    cout<<"Enter the second number : ";
    cin>>iValue2;

    CommonBits(iValue1, iValue2);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>g++ Assignment35_2.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>Myexe
Enter the first number : 10
Enter the second number : 15
Output1 : 2
Output2 : 4
*/