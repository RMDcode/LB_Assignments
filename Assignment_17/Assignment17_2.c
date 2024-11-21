#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>gcc Assignment17_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 9
1       2       3       4       5       6       7       8       9
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 8
1       2       3       4       5       6       7       8
*/