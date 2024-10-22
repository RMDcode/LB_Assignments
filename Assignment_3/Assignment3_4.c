//4. Accept one character from user and convert case of that character.
//  Input: a        Output: A
//  Input: D        Output: d

//  Step1 : Understand the problem statement.

//  Step2 : Write the Algorithm
/*
    START
        Take input from user.
        Convert the case into function. 
        Display the output.
    END
*/

//  Step3 : Select the Language.
//  C - Program

//  Step4 : Write the Program.
#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue)
{   
    if(islower(cValue))
    {
        printf("Output: %c\n",toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("Output: %c\n",tolower(cValue));
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    
    DisplayConvert(cValue);

    return 0;
}


//  Step5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>gcc Assignment3_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter the character:
a
Output: A

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter the character:
D
Output: d
*/