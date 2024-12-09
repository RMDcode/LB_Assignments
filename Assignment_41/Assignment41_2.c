#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt ++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>gcc Assignment41_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>Myexe
Enter number : 5
1       2       3       4       5
*/