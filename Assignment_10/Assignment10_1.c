/*
1. Write a program which accept range from user 
and display all numbers in between that range.

Input:  23 35
OutPut: 23 24 25 26 27 28 29 30 31 32 33 34 35

Input:  10 18 
OutPut: 10 11 12 13 14 15 16 17 18

Input:  10 10
OutPut: 10 

Input:  -10 2
OutPut: -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

Input:  90 18
OutPut: Invalid range
*/

// Step 1: Understand the problem statement

// Step 2: Write the algorithm
/*
    START
        Take input from user.
        Write logic range.
        Display the output.
    END
*/

// Step 3: Select the Language.
// C-program
// Step 4: Write the program.

#include<stdio.h>

void RangeDiplay(int iStart, int iEnd)
{
    int iCnt = 0;
    printf("Output: ");

    if( iStart > iEnd )
    {
        printf("Invalid range");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt ++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDiplay(iValue1, iValue2);

    return 0;
}
// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>gcc Assignment10_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 23
Enter ending point : 35
Output: 23 24 25 26 27 28 29 30 31 32 33 34 35
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 10
Enter ending point : 18
Output: 10 11 12 13 14 15 16 17 18
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 10
Enter ending point : 10
Output: 10
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : -10
Enter ending point : 2
Output: -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 90
Enter ending point : 18
Output: Invalid range
*/