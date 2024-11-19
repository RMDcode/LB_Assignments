#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1 ; i <= iRow ; i++ )
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if( j % 2 == 0 )
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_20>gcc Assignment20_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_20>Myexe
Enter number of rows and columns:
3 4
*       #       *       #
*       #       *       #
*       #       *       #

*/