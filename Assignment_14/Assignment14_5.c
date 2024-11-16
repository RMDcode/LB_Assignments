/*
5. Accept N numbers from user and accept one another number as No,
return frequency of NO form it.

Input:  N:  6    
        No: 66
Elements:   85 66 3 66 93 88

Output:     2

Input:  N:  6
        NO: 12
Elements:   85 11 3 15 11 111

Output:     0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0 ;

    for( iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] == iNo )
        {
            iCount ++;
        }
    }

    return iCount;
}

int main()
{
    int iCnt = 0, iSize = 0 ,iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory!");
        return -1;
    }

    printf("Enetered %d elements :",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("\nEnter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("\nOutput : %d",iRet);

    free(p);
    return 0;
}

// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>gcc Assignment14_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter the number of elements : 6
Enter the number: 66
Enetered 6 elements :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

Output : 2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter the number of elements : 6
Enter the number: 12
Enetered 6 elements :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 11

Enter the elements : 3 -> 3

Enter the elements : 4 -> 15

Enter the elements : 5 -> 11

Enter the elements : 6 -> 111

Output : 0
*/