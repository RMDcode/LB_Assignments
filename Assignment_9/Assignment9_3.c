/*
3. Write a program which accept distance in kilometer and convert it into meter.
(1 Kilometer = 1000 Meter )

Input:  5
Output: 5000

Input:  12
Output: 12000
*/

// Step 1 : Understand the problem statement.

// Step 2 : Write the algorithm.
/*
    START
        Take input from kilometer.
        Calculate the KM to M. 
        Display the Meter.
    END
*/

// Step 3 : Select the Language.
//C-Program
// Step 4 : Write the program.

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter = 0;
    Meter = iNo * 1000;
    return Meter;
}

int main()
{
    int iValue= 0, iRet = 0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is: %d",iRet);

    return 0;
}
// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter distance:5
Meter is: 5000
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_9>Myexe
Enter distance:12
Meter is: 12000
*/