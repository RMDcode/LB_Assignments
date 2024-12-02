#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;

    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is a Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>gcc Assignment30_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : F
It is a Capital Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : d
It is not a Capital Character
*/