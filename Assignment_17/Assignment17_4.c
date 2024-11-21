#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    printf("Output : ");
    for( iCnt = 1 ; iCnt < iNo ; iCnt ++)
    {  
        if(iCnt < 15)
        {
            if(iCnt % 2 != 0)
            {   
                printf("%d\t",iCnt);    
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>gcc Assignment17_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 18
Output : 1      3       5       7       9       11      13
*/