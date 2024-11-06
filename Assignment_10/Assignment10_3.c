#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iTotal = 0;

    if( (iStart < 0) || (iStart > iEnd) )
    {
        printf("Invalid range\n");
        exit(0);
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt ++ )
    {
        iTotal += iCnt; 
    }

    return iTotal;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}

// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>gcc Assignment10_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 23
Enter ending point : 30
Addition is : 212

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 10
Enter ending point : 18
Addition is : 126

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : -10
Enter ending point : 2
Invalid range

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_10>Myexe
Enter starting point : 90
Enter ending point : 18
Invalid range

*/