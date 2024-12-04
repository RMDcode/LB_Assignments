#include<iostream>
#include<stdbool.h>
using namespace std;

bool chkBit(int iNo)
{
    bool bFlag = false;
    int iMask = 0x04000;
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
        printf("15th bit is On\n");
    }
    else
    {
        printf("15th bit is Off\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>g++ Assignment32_1.cpp -o  Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>Myexe
Enter the digit : 16384
15th bit is On
*/