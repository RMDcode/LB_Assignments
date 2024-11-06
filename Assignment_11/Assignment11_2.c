#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while( iNo > 0 )
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;
        
        if( iDigit == 0 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>gcc Assignment11_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 2395
There is no zero
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 1018
There is no zero
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 9000
It Contains Zero
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 10687
There is no zero
*/
