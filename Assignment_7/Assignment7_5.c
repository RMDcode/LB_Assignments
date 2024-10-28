/*
5. Write a program which returns difference between Even factorial and 
Odd factorial of given number.

Input:  5
Output: -7      (8 - 15)

Input:  -5
Output: -7      (8 - 15)

Input:  10
Output: 2895    (3840 - 945)
*/

//Step 1: Understand the problem statement.

//Step 2: Write the Algorithm.
/*
    START
        Take input from users.
        Logic for difference between Even factorial and odd factorial.
        Display output.
    END
*/

//Step 3: Select the Language.
//C-Program
//Step 4: Write the program.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iTotal1 = 1;
    int iTotal2 = 1;
    int iTotal = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            iTotal1 = iTotal1 * iCnt;           
        }
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 != 0)
        {
            iTotal2 = iTotal2 * iCnt;           
        }
    }

    iTotal = iTotal1 - iTotal2;

    return iTotal;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}

//Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>gcc Assignment7_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
5
Factorial difference is -7
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
-5
Factorial difference is -7
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
10
Factorial difference is 2895
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>
*/

