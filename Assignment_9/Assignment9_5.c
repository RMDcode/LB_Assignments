/*
5. Write a program which accept area in square feet and
Convert it into square meter.
(1 Square feet = 0.0929 Square meter)

Input:  5
Output: 0.464515

Input:  7
Output: 0.650321
*/

//Step 1: Understand the problem statement.

//Step 2: Write the Algorithm.
/*
    START
        Take the input from user
        Convert feet to meter.
        Display the Output.
    END
*/

//Step 3: Select the Language.
//C-Program
//Step 4: Write the program.

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dArea = 0.0;
    double iValue = 0.0;
    iValue = 10.7639;

    dArea = (((double)iNo) / iValue);

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter is : %lf\n",dRet);

    return 0;
}
//Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>gcc Assignment9_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter area in square feet : 5
Square meter is : 0.464516
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter area in square feet : 7
Square meter is : 0.650322
*/