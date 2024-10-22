/*
4. Accept two numbers from user and display first number in second number of times.
*/

//  Step 1: Understand the problem statement.

//  Step 2: Write the Algorithm.
/*
    START
        Accept number from user.
        Accept frequency from user.
        Write Updater.
        Display Output
    END
*/

//  Step 3: Select the Language.
//  C-program

//  Step 4: Write the program.
#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Write Updater.
    if ( iFrequency < 0 )
    {
        iFrequency = - iFrequency;
    }

    for(iCnt = 0 ; iCnt < iFrequency ; iCnt++)
    {   
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter Frequency:\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}
//  Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number:
12
Enter Frequency:
5
1212121212
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number:
-2
Enter Frequency:
-3
-2-2-2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number:
21
Enter Frequency:
-3
212121
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number:
-2
Enter Frequency:
0
*/