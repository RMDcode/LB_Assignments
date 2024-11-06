#include<stdio.h>

int CountDiff(int iNo)
{
    int iTotal = 0;
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEven += iDigit;
        }
        else if( iDigit % 2 != 0)
        {
            iOdd += iDigit;
        }

        iNo = iNo / 10;
    }

    iTotal = iEven - iOdd;

    return iTotal;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}


// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>gcc Assignment12_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 2395
-15
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 1018
6
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 8440
16
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 5733
-18
*/