/*
5. Accept N numbers from user and 
return product of all odd elements.

Input:  N:   6
    Elements:15 66 3 70 10 88

Output:      45

Input:  N:   6
    Elements:44 66 72 70 10 88

Output:      0 
*/
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMult = 1;

    for( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        if(Arr[iCnt] % 2 != 0 )
        {
            iMult *= Arr[iCnt];
        }
    }
    
    if(iMult == 1)
    {
        iMult = 0;
        return iMult;
    }

    return iMult;
}

int main()
{   
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL )
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered %d Elements\n",iSize);

    for( iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {   
        printf("Enter the elements : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);

    printf("\nProduct is %d\n",iRet);

    free(p);
    return 0;
}
// Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>gcc Assignment15_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements : 6
Entered 6 Elements
Enter the elements : 1 -> 15
Enter the elements : 2 -> 66
Enter the elements : 3 -> 3
Enter the elements : 4 -> 70
Enter the elements : 5 -> 10
Enter the elements : 6 -> 88

Product is 45

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_15>Myexe
Enter the number of elements :
6
Entered 6 Elements
Enter the elements : 1 -> 44
Enter the elements : 2 -> 66
Enter the elements : 3 -> 72
Enter the elements : 4 -> 70
Enter the elements : 5 -> 10
Enter the elements : 6 -> 88

Product is 0
*/