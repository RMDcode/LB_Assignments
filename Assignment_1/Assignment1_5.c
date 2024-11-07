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

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Accept
// Description:     It is used to perform print "*" of n-number of int values using loop
// Input:           Int
// output:          char
// Author:          Rohit Dhuri
// Date:            19/10/2024
//
////////////////////////////////////////////////////////////////////////////////////////


void Accept(int iNo)
{
    int iCnt = 0;                           // Local variable for initialize value for loop

    for( iCnt = 0 ; iCnt < iNo ; iCnt++)    // Bussiness Logic
    {
        printf("*");
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  This application performs the print "*" using loop.
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;                         // Local variable for input

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Accept(iValue);                         // Function call

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