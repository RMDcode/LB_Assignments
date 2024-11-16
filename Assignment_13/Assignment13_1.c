/*
1. Accept N numbers from user and 
return difference between summation of even elements and
Summation of odd elements.

Input:  N:  6
Elements :  85 66 3 80 93 88

Output   :  53 (234-181)
*/
// Step 1 : Understand the problem statement.

// Step 2 : Write the Algorithm. 
/*
    START
        Accept the number of elements from user
        Allocate that memory dynamically
        Accept the values and store into the dynamic memory
        Perform the operations(Logic)
        Deallocate that memory
    END
*/
// Step 3 : Select the Language.
// C - Program
// Step 4 : Write the program.

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description:    It used for show difference between even sum and odd sum difference using array & pointers.
//  Input:          Int, Int
//  Output:         Int
//  Author:         Rohit Manoj Dhuri(LI_104)
//  Date:           11/12/2024  
//
//////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0, iTotal = 0;            //Local Variable for perform operations 

    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];                        //Bussiness Logic of Even sum
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];                          //Bussiness Logic of Odd sum
        }
    }

    iTotal =  iOddSum - iEvenSum;                                   //Bussiness Logic of Difference

    return iTotal;
}

//////////////////////////////////////////////////////////////////////////////
//
//  This application perform sum of even and odd numbers and then difference between that sum's.
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;                              //Local Variable for Input
    int *p = NULL;                                                  //Local variable for memory allocation

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    //printf("I m here ( -_- )");

    p = (int *)malloc(iSize * sizeof(int));                         //Allocate that Dynamic memory allocation

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++ )
    {      
        printf("Enter Array of element : %td\n",iCnt + 1);
        scanf("%d",&p[iCnt]);        
    }

    iRet = Difference(p, iSize);                                    //Function Call

    printf("Result is %d\n",iRet);

    free(p);                                                        //Deallocate memory allocation

    return 0;
}
// Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>gcc Assignment13_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>myexe
Enter number of elements : 6
Enter 6 elements
Enter Array of element : 1
85
Enter Array of element : 2
66
Enter Array of element : 3
3
Enter Array of element : 4
80
Enter Array of element : 5
93
Enter Array of element : 6
88
Result is 53
*/