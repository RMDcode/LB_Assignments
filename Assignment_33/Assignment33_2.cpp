#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x240;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{   
    int iDigit = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iDigit;

    iRet = OffBit(iDigit);

    cout<<"Output for 7th and 10th bit : "<<iRet<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>g++ Assignment33_2.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>Myexe
Enter the number : 577
Output for 7th and 10th bit : 1
*/