// 2 . Program to print 5 times "Marvellous" on screen.
/*
    step 1 : Understand the problem statement.
*/

/*
    step 2 : Write the algorithm.
    START
        Call the Function.
        Iterate 5 times
        Then Display Marvellous
    END
*/

/*
    step 3 : Select the language.
    C-program
*/

/*
    step 4 : Write the program.
*/
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is used to print "marvellous" 5 times in loop.
//  Input:          None
//  Output:         None   
//  Author:         Rohit Manoj Dhuri
//  Date:           19/10/2024
//
////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;                              //Local variable for initialize loop
    for( iCnt = 1 ; iCnt <= 5 ; iCnt++ )
    {
        printf("Marvellous\n");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  This application is used to perform "Marvellous" 5 times in loop 
//
////////////////////////////////////////////////////////////////////////


int main()
{
    Display();                                //Function Call

    return 0;
}

/* 
    step 5 : Test the program.
    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>gcc Assignment1_2.c -o Myexe

    C:\Users\Lenovo\Desktop\Assign_LB\Assignment_1>Myexe
    Marvellous
    Marvellous
    Marvellous
    Marvellous
    Marvellous
*/