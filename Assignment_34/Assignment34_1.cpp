#include<iostream>
#include<stdbool.h>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    bool bFlag = false;
    int iMask = 0x01;
    int iRet = 0;

    iMask = iMask << (iPos - 1);
    iRet = iNo & iMask;

    if(iRet == iMask)
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }

    return bFlag;
}

int main()
{
    int iNumber = 0;
    int iPos = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iNumber;

    cout<<"Enter the position : ";
    cin>>iPos;

    bRet = ChkBit(iNumber, iPos);

    if(bRet == true)
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>g++ Assignment34_1.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>Myexe
Enter the number : 10
Enter the position : 2
True
*/