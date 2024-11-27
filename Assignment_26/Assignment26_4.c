#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{   
    bool bFlag = false;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not special Character\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>gcc Assignment26_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : !
It is special Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : %
It is special Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : d
It is not special Character
*/