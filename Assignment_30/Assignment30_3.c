#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bFlag = false;

    if(ch >= '0' && ch <= '9')
    {
        bFlag = true; 
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>gcc Assignment30_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : 7
It is a Digit

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : d
It is not a Digit
*/