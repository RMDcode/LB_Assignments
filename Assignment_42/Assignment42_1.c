#include<stdio.h>

void Display(int iNo)
{
    if( iNo > 0 )
    {
        printf("%d\t*\t",iNo);
        iNo --; 
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>gcc Assignment42_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 6
6       *       5       *       4       *       3       *       2       *       1       *
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 5
5       *       4       *       3       *       2       *       1       *
*/