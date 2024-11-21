#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0, iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value is INR is %d",iRet);

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>gcc Assignment18_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number of USD : 10
Value is INR is 700
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number of USD : 3
Value is INR is 210
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number of USD : 1200
Value is INR is 84000
*/