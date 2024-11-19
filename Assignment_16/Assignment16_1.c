/*
1. Accept N numbers from user and return the largest number.

Input:  N:  6   
 Elements:  85 66 3 66 93 88
   
Output:  93
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iLargest = 0;
    iLargest = Arr[0];

    for(iCnt = 0 ; iCnt <= iLength ; iCnt ++ )
    {
        if(Arr[iCnt] > iLargest )
        {
            iLargest = Arr[iCnt];
        }
    }    
    return iLargest;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Entered %d Elements : ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("\nEnter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("\nLargest Number is %d\n",iRet); 

    free(p);
    
    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>gcc Assignment16_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>Myexe
Enter number of elements : 6
Entered 6 Elements :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

Largest Number is 93
*/