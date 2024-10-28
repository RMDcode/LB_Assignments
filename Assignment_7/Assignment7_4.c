/*
3. Write a program to find Odd factorial of given number.

Input:  5   
Output: 15       (5 * 3 * 1)

Input:  -5
Output: 15       (5 * 3 * 1)

Input:  10
Output: 945    (9 * 7 * 5 * 3 * 1)
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

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iTotal = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}
//Step5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>gcc Assignment7_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
5
Odd Factorial of number is 15
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
-5
Odd Factorial of number is 15
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number:
10
Odd Factorial of number is 945
*/