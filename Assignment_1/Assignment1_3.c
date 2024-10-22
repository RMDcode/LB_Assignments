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

void Display()
{
    int iNo1 = 0;
    int i = 5;
    while( iNo1 < i )
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
// Step 5 : Test the program.
/*
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>gcc Assignment1_3.c -o Myexe

    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    54321
*/