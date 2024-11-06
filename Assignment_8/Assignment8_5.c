/*
5. Write a program which accept area in square feet and 
convert it into square meter.
(1 Square feet = 0.0929 Square meter )
    
Input:  5
Output: 0.464515

Input:  7
Output: 0.650321
*/

//Step 1 : Understand the problem statement.

//Step 2 : Write the Algorithm.
/*
    START
        Accept the input from user.
        Convert the Square feet into square meter.
        Display the output.
    END
*/

//Step 3 : Select the Language.
//C-Program.
//Step 4 : Write the program.

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSquareMeter = 0.0;
    double iValue = 0.0;
    iValue = 10.7639; 
    dSquareMeter = (((double) iNo) / iValue);

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meter is : %lf",&dRet);

    return 0;
}
//Step 5 : Test the program.