#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    char cChar = '\0';

    for( i = 1 ; i <= iRow ; i ++ )
    {
        for( j = 1, cChar = 'a', iCnt = 1 ; j <= iCol ; j ++, cChar ++, iCnt ++ )
        {   
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("%c\t",cChar);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>gcc Assignment22_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>Myexe
Enter number of rows and columns : 5 5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/