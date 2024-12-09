#include<stdio.h>

void Display()
{
    static int iCnt = 5;
    if( iCnt > 0 )
    {
        printf("%d\t",iCnt);
        iCnt --; 
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>gcc Assignment40_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>Myexe
5       4       3       2       1
*/