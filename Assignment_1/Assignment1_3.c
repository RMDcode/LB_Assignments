// 3. Program to print  5 to 1 numbers on screen.

// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm.
/*
    START
        Call the Display function
        Initialize i = 5
        Display 5 to 1 reverse order 
    END
*/
// Step 3 : Select the Language.
// C-program

// Step 4 : Write the program.
#include<stdio.h>
//////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is used to print 1 to 5 in reverse order.
//  Input:          None (Function call)  
//  Output:         Int
//  Author:         Rohit Dhuri  
//  Date:           19/10/2024
//
//////////////////////////////////////////////////////////////////////

void Display()
{
    int iNo1 = 0;                       // Local variable for initilize the loop
    int iCnt = 5;                       // Local variable for range
    while( iNo1 < iCnt )
    {
        printf("%d",iCnt);
        iCnt--;
    }
}

//////////////////////////////////////////////////////////////////////
//
// This function performs the reverse the order.
//
//////////////////////////////////////////////////////////////////////


int main()
{
    Display();                          // Function Call

    return 0;
}
// Step 5 : Test the program.
/*
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>gcc Assignment1_3.c -o Myexe

    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    54321
*/