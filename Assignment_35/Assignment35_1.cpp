#include<iostream>
using namespace std;
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while( iNo > 0 )
    {

        if(iNo & 1)
        {
            iCount ++;
        }

        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    int iRet = 0, iValue = 0 ;
 
    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Output:"<<iRet<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>g++ Assignment35_1.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>Myexe
Enter the number : 11
Output:3
*/