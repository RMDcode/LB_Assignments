/*
1. Write a program which accept radius of circle from user 
and calculate its area.
Consider value of PI as 3.14.
(Area = PI * Radius * Radius)

Input:  5.3
Output: 88.2026

Input:  10.4
Output: 339.6224
*/

//Step 1 : Understand the problem statement.

//Step 2 : Write the algorithm.
/*
    START
        Take input from user.
        Write the logic for formula.
        Display the output
    END
*/
//Step 3 : Select the language.
//C-Program
//Step 4 : Write the program.

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * (double) fRadius * (double) fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4lf",dRet);

    return 0;
}
//Step 5 : Test the program.
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>gcc Assignment8_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter radius:
5.3
Area of Circle is : 88.2026
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter radius:
10.4
Area of Circle is : 339.6224
*/

