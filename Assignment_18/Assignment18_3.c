#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFacto = 0;

    iFacto = 1;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            iFacto *= iCnt;
        }
    }
    return iFacto;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>gcc Assignment18_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 5
Even Factorial of number is 8
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : -5
Even Factorial of number is 8
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 10
Even Factorial of number is 3840
*/