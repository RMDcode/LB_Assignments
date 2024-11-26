#include<stdio.h>

void Pattern(int iRow, int iCol)
{     
    int i = 0, j = 0;
    char cChar1 = '\0', cChar2 = '\0';

    for( i = 1; i <= iRow ; i++ )
    {
        for( j = 1 , cChar1 = 'A', cChar2 = 'a' ; j <= iCol ; j ++ , cChar1 ++ , cChar2 ++ )
        {
            if( i % 2 == 0 )
            {
                printf("%c\t",cChar2);
            }
            else
            {
                printf("%c\t",cChar1);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>gcc Assignment21_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_21>Myexe
Enter number of rows and columns:
4
4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/