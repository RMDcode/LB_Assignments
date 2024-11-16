/*
3. Accept N numbers from user and accept one another number as NO,
return index of last occurrence of that NO.

Input:  N:  6
        No: 66
Elements:   85 66 3 66 93 88

Output:     3

Input:  N:  6
        No: 66
Elements  : 85 66 3 66 93 88

Output:     4

Input:  N:  6
        No: 12
Elements:   85 11 3 15 11 111

Output:     -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc( int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFlag = -1;

    for( iCnt = iLength ; iCnt > 0; iCnt -- )
    {
        if(Arr[iCnt] == iNo)
        {   
            iFlag = iCnt;
            break ;
        }
    }

    return iFlag;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the value : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered %d elements is : ",iSize);

    for( iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {
        printf("\nEnter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p,iSize,iValue);
    if( iRet == -1)
    {
        printf("\nThere is no such number\n");
    }
    else
    {
        printf("\nLast occurrence of number is %d\n",iRet);
    }

    free(p);
    return 0;
}

// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>gcc Assignment15_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter number of elements : 6
Enter the value : 66
Entered 6 elements is :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

Last occurrence of number is 3

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter number of elements : 6
Enter the value : 93
Entered 6 elements is :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

Last occurrence of number is 4

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter number of elements : 6
Enter the value : 100
Entered 6 elements is :
Enter the elements : 1 -> 85

Enter the elements : 2 -> 66

Enter the elements : 3 -> 3

Enter the elements : 4 -> 66

Enter the elements : 5 -> 93

Enter the elements : 6 -> 88

There is no such number

*/