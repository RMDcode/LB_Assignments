/*
1.  Write a program which accept number from user and
    Print that numbeer of $ & * on screen.
*/

//Step1:    Understand the problem statement.

//Step2:    Write the Algorithm.
/*
    START
        Take input from user.
        Iterate the $ and * 
        Display the output
    END
*/

//Step3:    Select the Language.
//C-Program
//Step4:    Write the program.

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    printf("Output:\n");

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("$ ");
        printf("* ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//Step5:    Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>gcc Assignment5_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
5
Output:
$ * $ * $ * $ * $ *
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
3
Output:
$ * $ * $ *
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
-3
Output:
$ * $ * $ *

The Time complexity is O(n).
*/