#include<stdio.h>

int MultiDigits(int iNo)
{
    int iTotal = 1;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iTotal *= iDigit;

        iNo = iNo / 10;
    }

    return iTotal;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}

//  Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 2395
270
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 1018
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 9440
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 922432
864
*/