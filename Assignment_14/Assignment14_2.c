#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0, iDifference = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt ++ )
    {
        if(iCnt % 2 == 0)
        {
            iEvenCount ++;
        }
        else
        {
            iOddCount ++;
        }
    }

    iDifference = iEvenCount - iOddCount;

    return iDifference;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt ++ )
    {
        printf("Enter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("\nDiffernce between even & odd frequency is : %d\n",iRet);    

    free(p);

    return 0; 
}

// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>gcc Assignment14_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter number of elements : 7
Enter 7 elements
Enter the elements : 1 -> 85
Enter the elements : 2 -> 66
Enter the elements : 3 -> 3
Enter the elements : 4 -> 80
Enter the elements : 5 -> 93
Enter the elements : 6 -> 88
Enter the elements : 7 -> 90

Differnce between even & odd frequency is : 1
*/