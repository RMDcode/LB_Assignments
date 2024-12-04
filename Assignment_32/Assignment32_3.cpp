#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(int iNo)
{   
    int iResult = 0;
    int iMask = 0x08104040;
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
    bool bRet = false;

    cout<<"Enter the Digit : ";
    cin>>iDigit;

    bRet = ChkBit(iDigit);
    
    if(bRet == true)
    {   
        printf("7th, 15th, 21st and 28th bit is ON\n");
    }
    else
    {
        printf("7th, 15th, 21st and 28th bit is ON\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>g++ Assignment32_3.cpp -o  Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_32>Myexe
Enter the Digit : 135282752
7th, 15th, 21st and 28th bit is ON

*/