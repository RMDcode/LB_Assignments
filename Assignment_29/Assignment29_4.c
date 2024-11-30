#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0, lastIndex = -1;

    while(str[iCnt] != '\0')
    {   
        if(str[iCnt] == ch)
        {
            lastIndex = iCnt;
        }
        iCnt ++;
    }    
    return lastIndex;
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

    iRet = LastChar(Arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>gcc Assignment29_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : M
Character location is : 11

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : W
Character location is : -1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : e
Character location is : 4
*/