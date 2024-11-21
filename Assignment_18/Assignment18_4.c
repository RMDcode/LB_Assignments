#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFacto = 0;

    iFacto = 1;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
        if( iCnt % 2 == 1 )
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>gcc Assignment18_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 5
Odd factorial of number is 15
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : -5
Odd factorial of number is 15
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 10
Odd factorial of number is 945
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>
*/