#include<stdio.h>

void Display(char ch)
{   
    char cCnt = '\0';

    printf("Output: \n");
    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch ; cCnt <= 'Z' ; cCnt ++ )
        {
            printf("%c\t",cCnt);
        }
    }   
    else if( (ch >= 'a') && (ch <= 'z') )
    {
        for(cCnt = ch ; cCnt >= 'a' ; cCnt -- )
        {
            printf("%c\t",cCnt);
        }
    }
    else
    {
        printf("\nThis is not alphabets");
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : Q
Output:
Q       R       S       T       U       V       W       X       Y       Z
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : m
Output:
m       l       k       j       i       h       g       f       e       d       c       b       a
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : 8
Output:

This is not alphabets
*/