#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cChar = '\0';
    printf("Output : \n");
    for( i = 1 , cChar = 'A'; i <= iRow ; i ++ , cChar ++)
    {
        for( j = 1 ; j <= iCol ; j ++ )
        {
            printf("%c\t",cChar);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>gcc Assignment21_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>Myexe
Enter number of rows and columns :
3 5
Output :
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
*/