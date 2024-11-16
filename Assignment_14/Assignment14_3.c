#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFlag = false;

    for( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        if( Arr[iCnt] == 11 )
        {   
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {
        printf("Enter elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if( bRet == true )
    {
        printf("\n11 is present\n");
    }
    else
    {
        printf("\n11 is absent\n");
    }

    free(p);

    return 0;    
}

// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter the number of elements :
6
Enter 6 elements
Enter elements : 1 -> 85
Enter elements : 2 -> 66
Enter elements : 3 -> 11
Enter elements : 4 -> 80
Enter elements : 5 -> 93
Enter elements : 6 -> 88

11 is present

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_14>Myexe
Enter the number of elements : 6
Enter 6 elements
Enter elements : 1 -> 85
Enter elements : 2 -> 66
Enter elements : 3 -> 3
Enter elements : 4 -> 80
Enter elements : 5 -> 93
Enter elements : 6 -> 88

11 is absent
*/