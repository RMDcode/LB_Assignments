/*
5. Accept N numbers from user and 
Display summation of digits of each number.

Input: N:   6
Elements:   8225 665 3 76 953 858

Output:     17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    printf("Summation of digits : ");
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {   
        iSum = 0;
        while(Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }   

        printf("%d\t",iSum);
    }

}

int main()
{
    int iSize = 0, iCnt = 0;
    int  *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Entered %d elements : ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {
        printf("\nEnter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);
    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>gcc Assignment16_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>Myexe
Enter number of elements : 6
Entered 6 elements :
Enter the elements : 1 -> 8225

Enter the elements : 2 -> 665

Enter the elements : 3 -> 3

Enter the elements : 4 -> 76

Enter the elements : 5 -> 953

Enter the elements : 6 -> 858
Summation of digits : 17        17      3       13      17      21
*/