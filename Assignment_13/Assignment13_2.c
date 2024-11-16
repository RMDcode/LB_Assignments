/*
2.  Accept N numbers from user and 
Display all such elements which are divisible by 5.

Input:  N:  6
Elements:   85 66 3 80 93 88

Output:     85 80
*/

// Step 1 : Understand the problem statements

// Step 2 : Write the Algorithm
/*
    START
        Accept number of elements from user
        Allocate the Dynamic Memory allocation
        Accept the values and allocate into memory.
        Call the function (Logic)
        Deallocate the memory
    END
*/
// Step 3 : Select the Language.
//C-program

// Step 4 : Write the Program.

#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is used for show the elements which divisible by 5
//  Input:          Int, Int
//  Output:         Int
//  Author:         Rohit Manoj Dhuri(LI_104)  
//  Date:           11-12-2024
//
//////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;                                       //Local variable for loop
    printf("\n");
    printf("Output :\t");
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] % 5 == 0)                          //Bussiness Logic 
        {   
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;                  // Local variable for input
    int *p = NULL;                                      // Local variable for dynamic memory

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));             //Allocated dynamic memory allocation

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elemensts \n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);                                  //Function Call

    free(p);                                            //Deallocate the memory allocation
    return 0;    
}

// Step 5 : Test the Program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>gcc Assignment13_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>Myexe
Enter number of elements :
6
Enter 6 elemensts
Enter element : 1
85
Enter element : 2
66
Enter element : 3
3
Enter element : 4
80
Enter element : 5
93
Enter element : 6
88

Output :        85      80
*/