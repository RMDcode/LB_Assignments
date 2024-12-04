#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(int iNo)
{   
    bool bFlag = false;
    int iMask = 0x01c0;
    int iResult = 0;

    iResult = iNo & iMask;

    if( iResult == iMask )
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

    cout<<"Enter the Digits : ";
    cin>>iDigit;

    bRet = ChkBit(iDigit);

    if(bRet == true)
    {
        printf("7th, 8th and 9th bit is ON\n");

    }
    else
    {
        printf("7th, 8th and 9th bit is OFF\n");
        
    }

    return 0;
}   
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>g++ Assignment32_4.cpp -o  Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>Myexe
Enter the Digits : 448
7th, 8th and 9th bit is ON

*/