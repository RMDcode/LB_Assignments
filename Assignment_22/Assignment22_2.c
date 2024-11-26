#include<stdio.h>
/*
    2 4 6 8 10
    1 3 5 7 9
    2 4 6 8 10
    1 3 5 7 9
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    printf("Output : \n");
    for(i = 1 ; i <= iRow ; i ++)
    {   
        if(i % 2 == 0)
        {
            for(j = 1; j <= iCol + 1 ; j ++)
            {            
                printf("%d\t",2*j-1);
            }
        }
        else
        {   
            for(j = 1; j <= iCol + 1 ; j ++)
            {
                printf("%d\t",2*j);
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>gcc Assignment22_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_22>Myexe
Enter number of rows and columns : 4 4
Output :
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9
*/
