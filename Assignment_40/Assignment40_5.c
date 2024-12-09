#include<stdio.h>

void Display()
{
    static char cChar = 'a';

    if(cChar <= 'f')
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>gcc Assignment40_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>Myexe
a       b       c       d       e       f
*/