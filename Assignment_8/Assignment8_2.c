/*
2. Write a program which accept width & height of rectangle from user
and calculate its area.
(Area = Width * Height)

Input:  5.3 9.78
Output: 51.834
*/

//Step 1 : Understand the problem statement.

//Step 2 : Write the Algorithm.
/*
    START
        Accept the width 
        Accept the Height
        Calculate the area of rectangle
        Display the area
    END
*/
//Step 3 : Select the Language.
//C-Program.
//Step 4 : Write the program.

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = (double) fWidth * (double) fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %.3lf",dRet);

    return 0;
}
//Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>gcc Assignment8_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter width:5.3
Enter height:9.78
Area of Rectangle is : 51.834
*/