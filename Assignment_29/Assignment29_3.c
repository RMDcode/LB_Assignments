#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {   
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt ++;
    }    
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>gcc Assignment29_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : M
Character location is : 0

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : W
Character location is : -1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : Marvellous Multi OS
Enter the character : e
Character location is : 4

*/