#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

//Step 5 : Test the program.
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>gcc Assignment11_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 2395
5
9
3
2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 1018
8
1
0
1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : -1018
8
1
0
1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_11>Myexe
Enter number : 9000
0
0
0
9
*/