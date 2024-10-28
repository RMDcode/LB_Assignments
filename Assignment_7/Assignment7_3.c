/*
3. Write a program to find even factorial of given number.

Input:  5   
Output: 8       (4 * 2)

Input:  -5
Output: 8       (4 * 2)

Input:  10
Output: 3840    (10 * 8 * 6 * 4 * 2)
*/

//Step1 : Understand the problem statement.

//Step2 : Write the Algorithm.
/*
    START
        Take input from user.
        Write the logic for even for factorial.
        Display the output.
    END
*/

//Step3 : Select the Language.
//C-Program
//Step4 : Write the program.

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iTotal = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            iTotal = iTotal * iCnt;           
        }
    }

    return iTotal;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
//Step5 : Test the program.
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>gcc Assignment7_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
5
Even Factorial of number is 8
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
-5
Even Factorial of number is 8
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
10
Even Factorial of number is 3840
*/