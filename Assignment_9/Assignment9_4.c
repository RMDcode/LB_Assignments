/*
4. Write a program which accept temperature in Fahrenheit 
and convert it into celsius.
(1 Celsius = (Fahrenheit - 32) * (5/9))

Input:  10
Output: -12.2222    (10 - 32)*(5/9)

Input:  34
Output: 1.1111      (34 - 32)*(5/9)
*/

//Step 1: Understand the problem statement.

//Step 2: Write the Algorithm.
/*
    START
        Take input from user as celsius
        Calculate into Fahrenheit
        Display the Fahrenheit
    END
*/

//Step 3: Select the Language.
//C-Program
//Step 4: Write the Program.

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    double dValue1 = 32.0, dValue2 = 5.0, dValue3 = 9.0;

    dCelsius = (((double) fTemp - dValue1) * (dValue2 / dValue3));

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);
        
    dRet = FhtoCs(fValue);

    printf("Celsius is : %lf",dRet);

    return 0;   
}
//Step 5: Test the Program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>gcc Assignment9_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter temperature in Fahrenheit : 10
Celsius is : -12.222222
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter temperature in Fahrenheit : 34
Celsius is : 1.111111
*/
