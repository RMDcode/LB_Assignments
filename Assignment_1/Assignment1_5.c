// 5. Accept one number from user and print that number of * on screen.
// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm.
/*
    START
        Take Input from user.
        Call the function
        Iterate the stars
        Display stars
    END
*/
// Step 3 : Select the language.
// C-program
// Step 4 : Write the program.
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt = 0 ; iCnt < iNo ; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}
// Step 5 : Test the program.
/*
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>gcc Assignment1_5.c -o Myexe

    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter the number
    5
    *****
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter the number
    10
    **********
*/