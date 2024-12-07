#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x0f;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iDigit = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iDigit;

    iRet = OnBit(iDigit);

    cout<<"Output : "<<iRet<<"\n";

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>g++ Assignment33_5.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>Myexe
Enter the number : 73
Output : 79
*/