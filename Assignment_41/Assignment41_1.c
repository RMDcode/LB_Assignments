#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
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
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_41>Myexe
Enter number : 5
*       *       *       *       *
*/