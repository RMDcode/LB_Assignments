#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    static char cChar = 'a';

    if( iCnt <= iNo )
    {
        printf("%c\t",cChar);
        iCnt ++, cChar ++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>gcc Assignment41_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>Myexe
Enter number : 6
a       b       c       d       e       f
*/