/*
1. Write a program which accept number from user 
and display below pattern.

Input:  5
Output: * * * * * # # # # #

Input:  6
Output: * * * * * * # # # # # #

Input:  -5
Output: * * * * * # # # # #

Input:  2
Output: * * # #
*/

//Step 1: Understand the problem statement.

//Step 2: Write the Algorithm.
/*
    START
        Take input from user.
        Write logic for output using for loop
        Display the output.
    END
*/
//Step 3: Select the Language.
//C-Program.
//Step 4: Write the program.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1 = 0, iCnt2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Output:\n");
    for(iCnt1 = 1 ; iCnt1 <= iNo ; iCnt1 ++)
    {
        printf("*\n",iCnt1);
    }
    for(iCnt2 = 1 ; iCnt2 <= iNo ; iCnt2 ++)
    {
        printf("#\n",iCnt2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Step 5: Test the program.
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>gcc Assignment7_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter the number:
5
Output:
*
*
*
*
*
#
#
#
#
#

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter the number:
6
Output:
*
*
*
*
*
*
#
#
#
#
#
#

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter the number:
-5
Output:
*
*
*
*
*
#
#
#
#
#

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter the number:
2
Output:
*
*
#
#
*/

