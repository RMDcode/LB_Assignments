/*
2. Write a program which accept number from user 
    and print number till that number.

Input:  8   
Output: 1 2 3 4 5 6 7 8 
*/

//Step 1 : Understand the problem statement.

//Step 2 : Write the algorithm.
/*
    START
        Take the input from user.
        Write the logic
        Display the output.
    END
*/

//Step 3 : Select the Language.
//C-Language.

//Step 4 : Write the Program.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");
    for( iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        printf("%d\n",iCnt);
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
//Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>gcc Assignment5_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
Enter the number:
8
Output:
1
2
3
4
5
6
7
8

The Time complexity is O(n).
*/