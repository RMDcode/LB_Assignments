/*
2.Write a program which accept number from user 
and display its factor in decreasing order.

Input: 12
OutPut: 6 4 3 2 1

Input: 13
Output: 1

Input: 10
Output: 5 2 1
*/
//Step1:    Understand the problem statement.

//Step2:    Write the algorithm.
/*
    START
        Take input as number.
        Write the logic of factor.
        If factor is 10 or more number not allowed into multiplication.
        Display the Factor in decreasing order.
    END
*/

//Step3:    Select the language.
//C-program

//Step4:    Write the Program.

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    printf("Output:\n");

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0 && iCnt < 10)
        {   
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
//Step5:    Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>gcc Assignment4_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter the value:
12
Output:
6
4
3
2
1

Time complexity is O(n).
*/
