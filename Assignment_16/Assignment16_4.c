/*
Input:  N:  6
Elements :  8225 665 3 76 953 858

Output:     665 953 858
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0, iDigit = 0, iOriginal = 0;

    printf("Output: ");
    for( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        iCount = 0;
        iOriginal = Arr[iCnt];
    
        while(Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt] % 10;
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        if(iCount == 3)
        {
            printf("%d\t",iOriginal);
        }      
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL )
    {
        printf("Unable to allocate dynamic memory!");
        return -1;
    } 

    printf("Entered %d Elements : \n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("\nEnter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);
    
    return 0;
}