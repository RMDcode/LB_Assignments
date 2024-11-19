#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow ; i >= 1 ; i-- )
    {
        for(j = iCol ; j >= 1 ; j-- )
        {
            printf("%d\t",j);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_20>gcc Assignment20_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_20>Myexe
Enter number of rows and columns:
3 5
5       4       3       2       1
5       4       3       2       1
5       4       3       2       1

*/