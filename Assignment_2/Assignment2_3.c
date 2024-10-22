// 3. Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".
//  Step 1: Understand the problem statements.

//  Step 2: Write the Algorithm.
/*
    START
        Accept the number from user.
        Add Condition for less than 10 then print "Hello" otherwise print "Demo".
        Display the output.
    END
*/

//  Step 3: Select the Language.
//  C-program

//  Step 4: Write the program.
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//  Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>gcc Assignment2_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
5
Hello
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_2>Myexe
Enter number
10
Demo
*/