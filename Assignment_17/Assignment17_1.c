#include<stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Output : ");
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++ )
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>gcc Assignment17_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 5
Output : $      *       $       *       $       *       $       *       $      *
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : 3
Output : $      *       $       *       $       *
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_17>Myexe
Enter number : -3
Output : $      *       $       *       $       *
*/