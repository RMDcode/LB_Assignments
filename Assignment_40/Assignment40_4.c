#include<stdio.h>

void Display()
{
    static char cChar = 'A';

    if(cChar <= 'F')
    {   
        printf("%c\t",cChar);
        cChar ++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>gcc Assignment40_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>Myexe
A       B       C       D       E       F
*/