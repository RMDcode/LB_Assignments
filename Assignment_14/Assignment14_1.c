/*
1. Accept N numbers from user and
return frequency of even numbers.

Input: N:   6
Elements:   85  66  3   80  93  88

Output:     3
*/

// Step 1: Understand the problem statement

// Step 2: Write the Algorithm
/*
    START
    Accept number of elements from user
    Allocate the Dyanmic memory allocation
    Enter the elements
    Function call (logic)
    Deallocate memory
    END
*/

// Step 3: Select the Language
// C-Program

// Step 4: Write the Program

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount ++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element: %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("\nResult is : %d\n", iRet);

    free(p);

    return 0;
}

// Step 5: Test the Program
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>gcc Assignment14_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter number of elements : 6
Enter 6 elements
Enter element: 1 -> 85
Enter element: 2 -> 66
Enter element: 3 -> 3
Enter element: 4 -> 80
Enter element: 5 -> 93
Enter element: 6 -> 88

Result is : 3
*/