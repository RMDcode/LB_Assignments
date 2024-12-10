#include<stdio.h>

int Sum(int iNo)
{
    static int iCnt = 0, iSum = 0 ;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Output : %d\n",iRet); 

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>gcc Assignment42_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 55
Output : 10

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 879
Output : 24
*/