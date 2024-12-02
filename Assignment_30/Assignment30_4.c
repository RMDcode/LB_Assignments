#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    bool bFlag = false;

    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is a Small Case Character\n");
    }
    else
    {
        printf("It is not a Small Case Character\n");
    }

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>gcc Assignment30_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : a
It is a Small Case Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : g
It is a Small Case Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : D
It is not a Small Case Character

*/