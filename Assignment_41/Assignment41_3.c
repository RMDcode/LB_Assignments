#include<stdio.h>

void Display(int iNo)
{
    if( iNo > 0 )
    {
        printf("%d\t",iNo);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>gcc Assignment41_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>Myexe
Enter number : 5
5       4       3       2       1
*/