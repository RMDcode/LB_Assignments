#include<iostream>
#include<stdbool.h>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{   
    bool bFlag = false;
    UINT iMask = 0x80000001;
    UINT iResult = 0;

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
    UINT iDigit = 0;
    bool bRet = false;

    cout<<"Enter the Digits : ";
    cin>>iDigit;

    bRet = ChkBit(iDigit);

    if(bRet == true)
    {
        printf("1ST and 32th bit is ON\n");

    }
    else
    {
        printf("1ST and 32th bit is OFF\n");
        
    }

    return 0;
}   
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>g++ Assignment32_5.cpp -o  Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>Myexe
Enter the Digits : 2147483649
1ST and 32th bit is ON
*/