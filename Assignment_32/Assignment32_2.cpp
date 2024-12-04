#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x020010;
    bool bFlag = false;

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
    bool iRet = false;

    cout<<"Enter the Digit : ";
    cin>>iDigit;

    iRet = ChkBit(iDigit);

    if(iRet == true)
    {
        printf("5th & 18th bit is On\n");
    }
    else
    {
        printf("5th & 18th bit is Off\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>g++ Assignment32_2.cpp -o  Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>Myexe
Enter the Digit : 131088
5th & 18th bit is On
*/