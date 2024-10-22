//4. Accept one number and check whether is divisible by 5 or 0.

// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm.
/*
    START
        Input number
        Function Call
        Need to check is divisible by 5 or not.
        Display output
    END
*/

// Step 3 : Select the Language.
// C-program

// Step 4 : Write the program.
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}
// Step 5 : Test the program.
/*
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter number
    1
    Not Divisible by 5
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter number
    2
    Not Divisible by 5
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter number
    5
    Divisible by 5
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Enter number
    10
    Divisible by 5
*/