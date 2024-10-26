/*
3. Write a program which accept number from user 
and display all its non factors.

Input:  12  
Output: 5 7 8 9 10 11


Input:  13
Output: 2 3 4 5 6 7 8 9 10 11 12

Input:  10 
Output: 3 4 6 7 8 9
*/

//Step1: Understand the problem statement

//Step2: Write the Algorithm
/*
    START
        Take input from user as int
        Write the logic for non-factor number.
        Display the output from function
    END
*/
//Step3: Select the language.
//C-program.
//Step4: Write the program.

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
//Step5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>gcc Assignment4_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
12
Output:
5
7
8
9
10
11

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
13
Output:
2
3
4
5
6
7
8
9
10
11
12

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
10
Output:
3
4
6
7
8
9

The Time complexity is O(n).
*/
