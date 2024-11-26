#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    iRow = iRow + 1;
    iCol = iCol + 1;

    for( i = 1 ; i <= iRow ; i ++)
    {
        for( j = 1 ; j <= iCol ; j ++)
        {   
            if( i == 1 || i == iRow || j == 1 || j == iCol )            
            {
                printf("%d\t",j);
            }
            else if( j == i )
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_25>gcc Assignment25_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_25>Myexe
Enter number of rows and columns : 4 4
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5

*/