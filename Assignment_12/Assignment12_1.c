#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    printf("Output : ");

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iNo % 2 == 0 )
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

    printf("Enter the deciaml : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}


// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>gcc Assignment12_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter the deciaml : 2395
Output : 1
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter the deciaml : 1018
Output : 2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter the deciaml : -1018
Output : 2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter the deciaml : 8642
Output : 4
*/