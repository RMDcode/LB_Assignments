#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {   
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str ++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>gcc Assignment29_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : e
Character found

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : w
Character not found

*/