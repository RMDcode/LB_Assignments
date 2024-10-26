/*
4. Write a program which accept number from user 
and return summation of all its non-factors.

input:  12   
Output: 50

Input:  10
Output: 37
*/

//Step 1:   UnderStand the problem statement.

//Step 2:   Write the Algorithm.
/*
    START
        Take input from user as int
        Write logic of non-factor into function
        Perform summation non-factor numbers
        Display the output  
    END
*/

//Step 3:   Select the Language.
//C-program

//Step 4:   Write the program.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iTotal = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
            iTotal = iCnt + iTotal;
        }
    }
    return iTotal;
}

int main()
{
    int iValue = 0;
    int iRet   = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Output :%d\n",iRet);

    return 0;
}
//Step 5:   Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>gcc Assignment4_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter the number:
12
Output :50

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter the number:
10
Output :37

The Time complexity is O(n).

*/