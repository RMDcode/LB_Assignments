#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {   
        if(*str == ch)
        {
            iCnt ++;
        }
        str ++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>gcc Assignment29_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : M
Character frequency is : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : W
Character frequency is : 0
*/