#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;

    if(iNo > 0)
    {
        iMult = iMult * (iNo % 10);
        iNo = iNo / 10;
        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Output : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>gcc Assignment42_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter number : 523
Output : 30
*/