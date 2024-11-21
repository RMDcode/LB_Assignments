#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("*\t");
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("#\t");
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>gcc Assignment18_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 5
*       *       *       *       *       #       #       #       #       #
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 6
*       *       *       *       *       *       #       #       #       #       #       #
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : -6
*       *       *       *       *       *       #       #       #       #       #       #
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_18>Myexe
Enter number : 2
*       *       #       #
*/