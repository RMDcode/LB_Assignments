#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = iRev * 10 + iDigit;

        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse number : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>gcc Assignment43_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter number : 523
Reverse number : 325
*/