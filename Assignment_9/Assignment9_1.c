/*
1.Write a program which accept radius of circle from user 
and calculate its area.
Consider value of PI as 3.14.(Area = PI * Radius * Radius)

Input:  5.3
Output: 88.2026

Input: 10.4
Output: 339.6224
*/

//Step 1 : Understand the problem statement.

//Step 2 : Write the Algorithm.
/*
    START
        Take radius as input.
        Calculate using formula.
        Display the Area of circle.
    END
*/
//Step 3 : Select the Language.
//C-Program.
//Step 4 : Write the program.

#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area = 0.0;
    double PI = 3.14;
    Area = PI *(double) fRadius *(double) fRadius; 
    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle :%.4lf\n",dRet);

    return 0;
}
//Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>gcc Assignment9_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter radius:5.3
Area of Circle :88.2026

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter radius:10.4
Area of Circle :339.6224
*/