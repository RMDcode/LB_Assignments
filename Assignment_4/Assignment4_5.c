/*
5. Write a program which accept number from user and
return difference between summation of all its factors and non-factors.

Input:  12
Output: -34        (16-50)

Input:  10  
Output: -29        (8-37)
*/
//Step1:    Understand the problem statement

//Step2:    Write the Algorithm
/*
    START
        Take input from user.
        Write the logic for factor with loop if factor number 10 should not allowed.
        perform summation on factor
        Write the logic for non-factor.
        perform summation on non-factor
        write logic for difference
        Display the difference.
    END
*/
//Step3:    Select the Language.
// C-program

//Step4:    Write the program.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iTotal = 0;
    int iTotal_of_Fact = 0;
    int iTotal_of_nonFact = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if( iNo % iCnt == 0 && iCnt < 10)
        {
            iTotal_of_Fact += iCnt;
        }
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if( iNo % iCnt != 0)
        {
            iTotal_of_nonFact += iCnt;
        }
    }

    iTotal = iTotal_of_Fact - iTotal_of_nonFact;

    return iTotal;
}

int main()
{
    int iValue = 0;
    int iRet   = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Output: %d\n",iRet);

    return 0;
}
//Step5:    Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>gcc Assignment4_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
12
Output: -34

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
10
Output: -29

The Time complexity is O(n).

*/