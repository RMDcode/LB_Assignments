//5. Accept on character from user and 
//   Check Whether that character is vowel (a,e,i,o,u) or not.
//  Input: E   Output: TRUE
//  Input: d   Output: FALSE

//  Step1 : Understand the problem statement.

//  Step2 : Write the Algorithm.
/*
    START
        Take input character
        Check vowels
        Display output
    END
*/

//  Step3 : Select the Language.
//  C-program

//  Step4 : Write the program.
#include<stdio.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char cValue)
{
    if( cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' )
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    printf("Output:\n");
    if( bRet == TRUE)
    {
        printf("It is Vowel.");
    }
    else
    {
        printf("It is not Vowel.");
    }

    return 0;
}

//  Step5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>gcc Assignment3_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter character:
E
Output:
It is Vowel.
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_3>Myexe
Enter character:
d
Output:
It is not Vowel.
*/