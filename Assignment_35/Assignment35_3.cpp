#include<iostream>
#include<stdbool.h>
using namespace std;

bool chkBit(int iNo)
{
    bool bFlag = false;
    int iMask = 0x0900;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iDigit = 0;
    bool bRet = false;

    cout<<"Enter the digit : ";
    cin>>iDigit;

    bRet = chkBit(iDigit);

    if(bRet == true)
    {
        cout<<"9th or 12th bit is ON\n";
    }
    else
    {
        cout<<"9th or 12th bit is OFF\n";
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>g++ Assignment35_3.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_35>Myexe
Enter the digit : 257
9th or 12th bit is OFF
*/