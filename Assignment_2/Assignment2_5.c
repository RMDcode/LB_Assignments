//5. Accept number from user and check whether number is even or odd.
//  Step 1: Understand the problem stand

//  Step 2: Write the Algorithm
/*
    START
        Input number from user
        Call the function
        Write logic of CheckEven into Function
        Display the output
    END
*/

//  Step 3: Select the Language
//  C-program

//  Step 4: Write the program
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    if(iNo % 2 == 0)
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if( bRet == TRUE )
    {
        printf("This number is even...");
    }
    else
    {
        printf("This number is odd...");
    }

    return 0;
}
//  Step 5: Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>gcc Assignment2_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter the number:
5
This number is odd...
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter the number:
2
This number is even...
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter the number:
10
This number is even...
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter the number:
-1
This number is odd...
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter the number:
-2
This number is even...
*/