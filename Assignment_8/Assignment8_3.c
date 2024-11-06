/*
3. Write a program which accept distance in kilometer and 
Convert it into meter.
( 1 Kilometer  = 1000 Meter )

Input:  5
Output: 5000

Input:  12
Output: 12000
*/

// Step 1 :  Understand the problem statement.

// Step 2 :  Write the algorithm.
/*
    START
        Accept input from user.
        Kilometer convert into meter.
        Display the output.
    END
*/

// Step 3 :  Select the Language.
//C-Program
// Step 4 :  Write the program.

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int KM = 0;

    KM = iNo * 1000;

    return KM;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is: %d",iRet);

    return 0;
}
// Step 5 :  Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>gcc Assignment8_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter the distance:1
Meter is: 1000
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter the distance:10
Meter is: 10000
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_8>Myexe
Enter the distance:12
Meter is: 12000
*/