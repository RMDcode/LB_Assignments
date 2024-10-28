/*
2. Accept amount is US dollar 
and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
*/

//Step1: Understand the problem statement.

//Step2: Write the algorithm.
/*
    START
        Take input from user.
        Logic of multiplication.
        Display the output.
    END
*/

//Step3: Select the Language.
//C-Program

//Step4: Write the Program.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRate = 70;

    iNo = iRate * iNo;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
//Step5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>gcc Assignment7_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number of USD: 10
Value in INR is 700
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number of USD: 3
Value in INR is 210
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_7>Myexe
Enter number of USD: 1200
Value in INR is 84000
*/