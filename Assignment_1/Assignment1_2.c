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

void Display()
{
    int i = 0;
    for( i = 1 ; i <= 5 ; i++ )
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

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