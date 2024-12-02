#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }

    return 0;
}

/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>gcc Assignment30_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : F
It is Character

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter the character : &
It is not Character
*/