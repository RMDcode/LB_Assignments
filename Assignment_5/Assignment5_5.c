/*
5.  Write a program which accept N and print first 5 mulitiples of N.
*/

// Step 1: Understand the problem statement.

// Step 2: Write the Algorithm.
/*
    START
        Take input from user.
        Write the logic for first 5 multiplies of N.
        Display the output.
    END
*/
// Step 3: Select the Language.
// C-program.

// Step 4: Write the program.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");

    for (iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d\n",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>gcc Assignment5_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
4
Output:
4
8
12
16
20

The Time complexity is O(n).
*/

