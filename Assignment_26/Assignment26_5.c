/*
Input:  A

Output: Decimal       65
        Octal         0101
        Hexadecialmal 0X41
*/
#include<stdio.h>

void Display(char ch)
{
    printf("Decimal         %d\n",ch);
    printf("Octal           %#o\n",ch);
    printf("Hexadecimal     %#X\n",ch);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>gcc Assignment26_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_26>Myexe
Enter the character : A
Decimal         65
Octal           0101
Hexadecimal     0X41
*/