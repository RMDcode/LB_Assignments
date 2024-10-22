//3. Write a program which accept number from user 
//   and print even factors of that number.
//  Input : 36
//  Output: 2 6 12 18

// Step 1 : Understand the problem statement

// Step 2 : Write the algorithm.
/*
START
    Input from user.
    Write logic into function
    Display the output.
END
*/

// Step 3 : Select the Language.
// C-Program

// Step 4 : Write the program.
#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0)                            //Updater
    {
        iNo = -iNo;
    }
    printf("Output: \n");
    for( iCnt = 1 ; iCnt <= iNo-iCnt ; iCnt ++)
    {
        if(iNo % iCnt == 0)                 //Check iCnt factor of iNo
        {
            if(iCnt != 6 && iCnt % 2 ==0)   //Check 6cls or Even factors
            {
                printf("%d\n",iCnt);        // 2 4 12 18
            }
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}

// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>gcc Assignment3_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter the number:
36
Output:
2
4
12
18
*/