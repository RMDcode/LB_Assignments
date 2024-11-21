#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for( iCnt = -iNo ; iCnt <= iNo ; iCnt ++ )
    {
        printf("%d\t",iCnt);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>gcc Assignment17_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 4
-4      -3      -2      -1      0       1       2       3       4
*/
