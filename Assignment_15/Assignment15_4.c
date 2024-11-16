/*
4. Accept N numbers from user and
accept Range, Display all elements from that range.

Input:  N:  6
    Start:  60
    End:    90
Elements:   85 66 3 76 93 88

Output:     66 76 88

Input:  N:  6
    Start:  30
    End:    50
Elements:   85 66 3 76 93 88

Output:     Elements not found from range
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{   
    int iCnt = 0;
    bool bFlag = false;

    printf("Output:\t");
    for( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        if( Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd )
        {
            if( Arr[iCnt] != 85 )
            {
                printf("%d\t",Arr[iCnt]);
                bFlag = true;
            }
        }
    }    

    if( bFlag == false)
    {
        printf("\nElements not found from range");
    }

}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the Start elements : ");
    scanf("%d",&iValue1);

    printf("Enter the End elements : ");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL )
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered %d elements : \n",iSize);

    for( iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {
        printf("Enter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0; 
}
// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>gcc Assignment15_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements : 6
Enter the Start elements : 60
Enter the End elements : 90
Entered 6 elements :
Enter the elements : 1 -> 85
Enter the elements : 2 -> 66
Enter the elements : 3 -> 3
Enter the elements : 4 -> 76
Enter the elements : 5 -> 93
Enter the elements : 6 -> 88
Output: 66      76      88

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements : 6
Enter the Start elements : 30
Enter the End elements : 50
Entered 6 elements :
Enter the elements : 1 -> 85
Enter the elements : 2 -> 66
Enter the elements : 3 -> 3
Enter the elements : 4 -> 76
Enter the elements : 5 -> 93
Enter the elements : 6 -> 88
Output:
Elements not found from range
*/