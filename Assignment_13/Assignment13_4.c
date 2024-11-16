/*
3. Accept N numbers from user 
and display all such elements which are divisible by 3 and 5.

Input: N:   6 
Elements:   85 66 3 15 93 88

Output:     15

*/
//Step 1 : Understand the problem statement  

//Step 2 : Write the algorithm.
/*
    START
    Accept number of elements from user
    Allocate the dynamic memory allocation
    Accept the elements one by one
    Function call (logic)
    Deallocate memory
    END
*/

//Step 3 : Select the language
//C - program

//Step 4 : Write the program

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    printf("\nOutput : ");
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("%d",Arr[iCnt]);
        }        
    }
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

    printf("Enter %d elements \n\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {
        printf("Enter element : %d -> ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);
    free(p);

    return 0;
}

//Step 5 : Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>gcc Assignment13_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>Myexe
Enter number of elements : 6
Enter 6 elements

Enter element : 1 -> 85
Enter element : 2 -> 66
Enter element : 3 -> 3
Enter element : 4 -> 15
Enter element : 5 -> 93
Enter element : 6 -> 88

Output : 15
*/