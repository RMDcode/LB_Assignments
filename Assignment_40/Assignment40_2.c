#include<stdio.h>

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0; 
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>gcc Assignment40_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_40>Myexe
1       2       3       4       5
*/