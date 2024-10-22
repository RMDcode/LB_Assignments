//2. Write a program which accept number from user 
//   and print even factors of that number.

// Step 1: Understand the problem statement.

// Step 2: Write the Algorithm. 
/* 
START
    Input as iValue
    Call the function
    Write the Updater into function
    Logic of Even factors
    Display the output
END
*/
// Step 3: Select the Language.
// C - Program

// Step 4: Write the Program.
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = - iNo;
    }
    printf("Output :\n");
    for(iCnt = 1 ; iCnt <= iNo-iCnt ; iCnt ++)
    {
        if(iNo % iCnt == 0)//Check iCnt factor of iNo
        {
            if(iCnt == 1 || iCnt % 2 ==0)//Check 1 or Even factors
            {
                printf("%d\n",iCnt);
            }
        }
    }
}   

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>gcc Assignment3_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter number:
24
Output :
1
2
4
6
8
12
*/