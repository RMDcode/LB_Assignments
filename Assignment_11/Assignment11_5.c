#include<stdio.h>

int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}   

// Step 5: Test the program
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>gcc Assignment11_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 2395
3
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 1018
3
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 9440
3
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 96672
1
*/