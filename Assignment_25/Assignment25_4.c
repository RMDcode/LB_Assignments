#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for( i = 1 ; i <= iRow ; i ++)
    {
        for( j = 1 ; j <= iCol ; j ++)
        {
            if( j == iRow - i + 1 )
            {
                printf("*\t");
            }
            else if( i == 1 || i == iRow || j == 1 || j == iCol )
            {
                printf("*\t");
            }
            else if((j+1) <= (iRow-i+1))
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_25>gcc Assignment25_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_25>Myexe
Enter number of rows and columns : 6 6
*       *       *       *       *       *
*       #       #       #       *       *
*       #       #       *       $       *
*       #       *       $       $       *
*       *       $       $       $       *
*       *       *       *       *       *
*/