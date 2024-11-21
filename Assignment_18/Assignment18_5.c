#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0,iEven = 0, iOdd = 0, iDifference = 0;
    iEven = 1;
    iOdd = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            iEven *= iCnt;
        }
        else if(iCnt % 2 == 1)
        {
            iOdd *= iCnt;
        }
    }

    iDifference = iEven - iOdd;

    return iDifference;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference between is %d\n",iRet);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>gcc Assignment18_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 5
Factorial difference between is -7

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : -5
Factorial difference between is -7

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 10
Factorial difference between is 2895
*/