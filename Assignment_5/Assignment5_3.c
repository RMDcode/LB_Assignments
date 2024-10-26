/*
3. Write a program which accept number from user 
    and  print its numbers line.

Input: 4 
Output: -4 -3 -2 -1 0 1 2 3 4
*/

//Step 1: Understand the problem statement.

//Step 2: Write the algorithm.
/*
    START
        Take input from user.
        Write logic for show the range of negative to positive.
        Display the output
    END
*/

//Step 3: Select the Language.
//C-Language.

//Step 4: Write the program.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");
    for(iCnt = iNo; iCnt > 0 ; iCnt --)
    {
        printf("-%d\n",iCnt);
    }
    for(iCnt = 0; iCnt < iNo ; iCnt ++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("enter value:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_5>Myexe
enter value:
4
Output:
-4
-3
-2
-1
0
1
2
3

The Time complexity is O(n).
*/