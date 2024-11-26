#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for( i = 1 ; i <= iRow ; i ++)
    {
        for( j = 1 ; j <= iCol ; j ++)
        {
            if( j == i )
            {
                printf("%d\t",j);
            }
            else if( i < j )
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_24>gcc Assignment24_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_24>Myexe
Enter number of rows and columns : 4 4
1       2       3       4
        2       3       4
                3       4
                        4

*/