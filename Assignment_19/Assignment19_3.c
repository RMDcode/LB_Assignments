#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for( iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        printf("%d\t*\t",iCnt);
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

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>gcc Assignment19_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>Myexe
Enter number of elements : 5
1       *       2       *       3       *       4       *       5       *
*/
