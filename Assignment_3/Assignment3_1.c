//1. Write a program which accept one number from user and 
//  print that number of even numbers on screen.

//  Step 1: Understand the problem statement.

//  Step 2: Write the Algorithm.
/*
    START
        Input the number
        Logic into function
        Display the output
    END
*/

//  Step 3: Select the Language.
//  C-language.
//  Step 4: Write the program.
#include<stdio.h>

void PrintEven(int iNo)
{   
    printf("Output :\n");
    int iCnt = 0;
    int iNum = 2;
    if(iNo <= 0)
    {
        return;
    }
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("%d\n",iNum * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
//  Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>gcc Assignment3_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter number:
7
Output :
2
4
6
8
10
12
14
*/