#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0; 

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7 )
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}

// Step 5: Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>gcc Assignment12_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 2395
1
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 1018
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 4521
2
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_12>Myexe
Enter number : 9922
0
*/