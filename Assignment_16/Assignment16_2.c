/*
2. Accept N numbers from user and return the smallest number.

Input:  N:  6
 Elements:  85 66 3 66 93 88

Output:     3
*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iSmall = 0;
    iSmall = Arr[0];

    for(iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        if(Arr[iCnt] < iSmall )
        {
            iSmall = Arr[iCnt];
        }
    }    
    return iSmall;
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

    iRet = Minimum(p, iSize);

    printf("\nSmallest Number is %d\n",iRet); 

    free(p);
    
    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>gcc Assignment16_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_16>Myexe
Enter number of elements : 6
Entered 6 Elements :

Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

Smallest Number is 3
*/