// 1. Accept one number from user and print that number of * on screen.
// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm.
/*
    START
        Take input from user.
        Function call.
        Write updater into function
        Display the starts
    END
*/

// Step 3 : Select the Language.
// C-Language.

// Step 4 : Write the program.
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
     if ( iNo < 0 )
    {
        iNo = - iNo;
    }

    while( iCnt < iNo)
    {
        printf("*");
        iCnt ++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>gcc Assignment2_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
10
**********
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
5
*****
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
3
***
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
1
*
*/