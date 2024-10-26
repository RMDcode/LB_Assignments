/*
4. Write a program which accepts N from user 
and print all odd numbers up to N.
Input:  18  
Output: 1 3 5 7 9 11 13
*/

//Step 1:   Understand the problem statement.

//Step 2:   Write the Algorithm.
/*
    START
        Take input from user.
        Write the logic for odd number.
        Display the output.
    END
*/

//Step 3:   Select the Language.
//C-program

//Step 4:   Write the program.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");

    for (iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if(iCnt % 2 != 0 && iCnt < 15)
        {
            printf("%d\n",iCnt);
        }
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
//Step 5:   Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>gcc Assignment5_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
18
Output:
1
3
5
7
9
11
13

The Time complexity is O(n).
*/