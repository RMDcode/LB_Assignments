/*
4. Accept N numbers from user 
and return frequency of 11 from it.

Input: N:   6
Elements:   85 66 3 15 93 88
Output:     0

Input: N:   6
Elements:   85 11 3 15 11 111
Output:     2   
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount ++;
        }
    }

    return iCount ++;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered %d elements :\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("Enter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("\nOutput : %d",iRet);

    free(p);

    return 0;
}

// Step 5 : Test the program 
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>gcc Assignment14_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter number of elements : 6
Entered 6 elements :
Enter the elements : 1 -> 85
Enter the elements : 2 -> 66
Enter the elements : 3 -> 3
Enter the elements : 4 -> 15
Enter the elements : 5 -> 93
Enter the elements : 6 -> 88

Output : 0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter number of elements : 6
Entered 6 elements :
Enter the elements : 1 -> 85
Enter the elements : 2 -> 11
Enter the elements : 3 -> 3
Enter the elements : 4 -> 15
Enter the elements : 5 -> 11
Enter the elements : 6 -> 111

Output : 2
*/