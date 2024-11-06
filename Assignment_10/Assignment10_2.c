/*
2. Write a program which accept range from user and
display all even numbers in between that range.

Input:  23 35
Output: 24 26 28 30 32 34

Input:  10 18 
Output; 10 12 14 16 18

Input:  10 10
Output: 10

Input:  -10 2
Output: -10 -8 -6 -4 -2 0 2

Input:  90 18
Output: Invalid range
*/

// Step 1: Understand the problem statement

// Step 2: Write the Algorithm
/*
    START
        Take input from user.
        Write logic for range for even numbers
        Display the output.
    END
*/

// Step 3: Select the Language
//C-Program
// Step 4: Write the program.

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>gcc Assignment10_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 23
Enter ending point : 35
24 26 28 30 32 34
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 10
Enter ending point : 18
10 12 14 16 18
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 10
Enter ending point : 10
10
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : -10
Enter ending point : 2
-10 -8 -6 -4 -2 0 2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 90
Enter ending point : 18
Invalid range
*/