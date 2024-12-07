#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0x40;

    iRet = iNo ^ iMask;

    return iRet;
}

int main()
{
    int iDigit = 0, iResult = 0;

    cout<<"Enter the number : ";
    cin>>iDigit;


    iResult = OffBit(iDigit);

    cout<<"Output : "<<iResult<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>g++ Assignment33_1.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>Myexe
Enter the number : 79
Output : 15
*/