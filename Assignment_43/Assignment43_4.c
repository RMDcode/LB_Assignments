#include<stdio.h>

int Min(int iNo)
{
    static int iDigit = 0, iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit )
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Smallest digit is : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>gcc Assignment43_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter number :87983
Smallest digit is : 3
*/