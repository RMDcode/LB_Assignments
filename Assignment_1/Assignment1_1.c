//Program to divide two numbers.
/*
    step 1 : Understand the problem statement.
*/

/* 
    step 2 : Write the algorithm.
    START
        Input the first value.
        Input the second value.
        Call the function.
        Write the function 
        Divisor should not be zero then return -1
        Calculate the division
        Display output
    END
*/

/*
    step 3 : Select the language.
    C-Language
*/

/*
    step 4 : Write the program.
*/
#include<stdio.h>

float Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide( iValue1 , iValue2 );

    printf("Division is %d", iRet );

    return 0;
}

/* 
    step 5 : Test the program.
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>gcc Assignment1_1.c -o Myexe

    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Division is 3
*/