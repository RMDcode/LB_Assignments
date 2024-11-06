#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if( iNo < 0 )
    {
        iNo = - iNo;
    }

    while( iNo > 0 )
    {   
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCnt ++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}   

// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>gcc Assignment11_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 2395
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 1018
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 9440
2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 922432
1
*/