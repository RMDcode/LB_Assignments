#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt1 = 0, iCnt2 = 0;

    for( i = 1 ; i <= iRow ; i ++ )
    {
        for( j = 1, iCnt1 = 1, iCnt2 = -1  ; j <= iCol, iCnt2 >= -iCol ; j ++, iCnt1 ++, iCnt2 -- )
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt2);
            }   
            else
            {
                printf("%d\t",iCnt1);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>gcc Assignment22_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>Myexe
Enter number of rows and columns : 5 5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
*/