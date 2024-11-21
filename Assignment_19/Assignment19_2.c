#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for( iCnt = iNo ; iCnt > 0 ; iCnt -- )
    {
        printf("%d\t",iCnt);
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>gcc Assignment19_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>Myexe
Enter number of elements : 5
5       #       4       #       3       #       2       #       1       #
*/
