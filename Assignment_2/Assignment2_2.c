// 2 .Accept one number from user and print that number of * on screen. 
// Step 1 : Understand the problem statement.

// Step 2 : Write the algorithm.
/*
    START
        Accept input from user.
        Write Updater.
        Display number of *.
    END
*/

// Step 3 : Select the Language.
// C-program

// Step 4 : Write the program.
#include<stdio.h>

void Display(int iNo)
{
    //Write Updater
    if ( iNo < 0 )
    {
        iNo = - iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo --;
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>gcc Assignment2_2.c -o Myexe

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