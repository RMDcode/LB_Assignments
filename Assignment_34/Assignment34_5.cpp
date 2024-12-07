#include<iostream>
#include<stdbool.h>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x0000000f;
    UINT iMask2 = 0xf0000000;
  
    iNo = iNo ^ iMask1;
    iNo = iNo ^ iMask2;


    return iNo;
}

int main()
{
    UINT iNumber = 0;
    UINT iPos = 0;
    UINT iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNumber;

    iRet = ToggleBit(iNumber);

    cout<<"Output : "<<iRet<<"\n";

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>g++ Assignment34_5.cpp -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_34>Myexe
Enter the number : 305419896
Output : 3795080823
*/