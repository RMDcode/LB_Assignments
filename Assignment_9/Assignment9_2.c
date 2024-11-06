/*
2.Write a program which accept width and height of rectangle from user 
and calculate its area.(Area = Width * Height)

Input:  5.3 9.78
Output: 51.834
*/

// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm.
/*
    START
        Take first input as width
        Take Second input as Height
        Calculate the rectangle area.
        Display the output
    END
*/

// Step 3 : Select the Language.
// C-program
// Step 4 : Write the program.

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;
    Area = (double) fWidth * (double) fHeight;
    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %.3lf",dRet);

    return 0;
}
// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter Width : 5.3
Enter Height : 9.78
Area of Rectangle is : 51.834
*/