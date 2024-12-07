#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
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

    iRet = ToggleBit(iDigit);

    cout<<"Output : "<<iRet<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>g++ Assignment33_4.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_33>Myexe
Enter the number : 137
Output : 713
*/