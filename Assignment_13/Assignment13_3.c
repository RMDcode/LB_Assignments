/*
3. Accept N numbers from user 
and display all such elements which are even and display by 5.

Input:  N:  6
Elements:   85 66 3 80 93 88

Output:     80
*/
//Step 1 : Understand the problem statement

//Step 2 : Write the algorithm
/*  
    START
    Accept number of elements from user
    Allocate the Dynamic memory allocation
    Accept elements from 
    Function call (Logic)
    Deallocation memory
    END
*/

//Step 3 : Select the Language
//C-program

//Step 4 : Write the program

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0 ;

    printf("\nOutput:\t");
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] % 5 == 0 )
        {
            if(Arr[iCnt] % 2 == 0)
            {
                printf("%d\t",Arr[iCnt]);
            }
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

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        printf("Enter Element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }    

    Display(p, iSize);

    free(p);

    return 0;
}

//Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>gcc Assignment13_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_13>Myexe
Enter number of elements : 6
Enter 6 elements
Enter Element : 1
85
Enter Element : 2
66
Enter Element : 3
3
Enter Element : 4
80
Enter Element : 5
93
Enter Element : 6
88

Output: 80
*/
