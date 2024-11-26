#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for( i = iRow ; i >= 1 ; i -- )
    {
        for( j = iCol ; j >= 1 ; j -- )
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>gcc Assignment21_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>Myexe
Enter number of rows and columns :
4 5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1
*/