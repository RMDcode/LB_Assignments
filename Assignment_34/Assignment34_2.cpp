#include<iostream>
#include<stdbool.h>
using namespace std;

typedef unsigned int UINT;

UINT ChkBit(UINT iNo, int iPos)
{
    int iMask = 0x01;
    int iRet = 0;

    iMask = iMask << (iPos - 1);
    
    iRet = iNo ^ iMask;

    return iRet;
}

int main()
{
    int iNumber = 0;
    int iPos = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNumber;

    cout<<"Enter the position : ";
    cin>>iPos;

    iRet = ChkBit(iNumber, iPos);

    cout<<"Output : "<<iRet<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>g++ Assignment34_2.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>Myexe
Enter the number : 10
Enter the position : 2
Output : 8
*/