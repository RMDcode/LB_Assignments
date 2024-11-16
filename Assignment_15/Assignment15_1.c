/*
1. Accept N numbers from user and
accept one another number as NO, 
check whether NO is present or not.

Input:  N:   6
        No:  66
Elements:    85 66 3 66 93 88

Output:      TRUE

Input:  N:    6
        No:   12
Elements:     85 66 3 66 93 88

Output:       False
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }        
    }
    return bFlag;
}

int main()
{
    int iCnt = 0, iValue = 0, iSize = 0;
    bool iRet = false;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the value : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL )
    {
        printf("Unable to allocate dynamic memory!");
        return -1;
    } 

    printf("Entered %d elements : \n", iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("enter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Check(p, iSize, iValue);

    if(iRet == true)
    {
        printf("\n Output: Number is present\n");
    }
    else
    {
        printf("\n Output: Number is absent\n");
    }

    free(p);
    return 0;
}

// Step 5 : Test the program.
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>gcc Assignment15_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements : 6
Enter the value : 66
Entered 6 elements :
enter the elements : 1 -> 85
enter the elements : 2 -> 66
enter the elements : 3 -> 3
enter the elements : 4 -> 66
enter the elements : 5 -> 93
enter the elements : 6 -> 88

 Output: Number is present

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements : 6
Enter the value : 12
Entered 6 elements :
enter the elements : 1 -> 85
enter the elements : 2 -> 11
enter the elements : 3 -> 3
enter the elements : 4 -> 15
enter the elements : 5 -> 11
enter the elements : 6 -> 111

 Output: Number is absent
*/