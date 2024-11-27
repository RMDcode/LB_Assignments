#include<stdio.h>

void Display(char ch)
{   
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }   
    else if( (ch >= 'a') && (ch <= 'z') )
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>gcc Assignment26_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : Q
q

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : m
M

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : 4
4

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : %
%

*/