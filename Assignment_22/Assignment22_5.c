#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for( i = 1 ; i <= iRow ; i ++ )
    {   
        for( j = 1, iCnt = 1 ; j <= iCol ; j ++, iCnt ++ )
        {
            if( i == 1 )
            {
            printf("%d\t",iCnt);
            }
            else if( i == 2 )
            {
                printf("%d\t",iCnt+1);
            }
            else if( i == 3 )
            {
                printf("%d\t",iCnt+2);
            }
            else if( i == 4 )
            {
                printf("%d\t",iCnt+3);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>gcc Assignment22_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>Myexe
Enter number of rows and columns : 4 4
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7
*/