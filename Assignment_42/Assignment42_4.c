#include<stdio.h>

int Fact(int iNo)
{
    static int iCnt = 1, iFact = 1;

    if( iCnt <= iNo )
    {   
        iFact = iFact * iCnt;
        iCnt ++; 
        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Output : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>gcc Assignment42_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 5
Output : 120
*/