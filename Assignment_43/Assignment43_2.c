#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0, iDigit = 0;

    if(iNo != 0)
    {   
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Largest number : %d\n",iRet);

    return 0; 
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>gcc Assignment43_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter the number : 87983
Largest number : 9
*/