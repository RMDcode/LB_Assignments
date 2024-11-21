#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5 ; iCnt ++)
    {   
        printf("%d\t",iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>gcc Assignment17_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 4
4       8       12      16      20
*/