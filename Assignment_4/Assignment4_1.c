//1. Write a program which accept number from user 
//and display its multiplication of factors.
/*
Input : 12
OutPut: 144     (1*2*3*4*6)

Input:  13
Output: 1       (1)

Input:  10
Output: 10      (1*2*5)
*/

//Step 1: Understand the problem statement.

//Step 2: Write the algorithm.
/*
    START
        Take input from user
        Write logic of factors into fucntiony
        If factor is 10 or more number not allowed into multiplication.
        Also Multiply that factors.
        Display the output.
    END
*/

//Step 3: Select the Language.
//C-Program.
//Step 4: Write the program.
#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iTotal = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {   
        if(iNo % iCnt == 0 && iCnt < 10)
        {
            
            iTotal *= iCnt;        
        }
    }   
    return iTotal;
}

int main()
{
    int iValue = 0;
    int iRet =  0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multiply factors is :%d\n",iRet);

    return 0;
}
//Step 5: Test the program.

/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>gcc Assignment4_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
12
Multiply factors is :144

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
13
Multiply factors is :1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_4>Myexe
Enter number:
10
Multiply factors is :10

Time Complexity is O(n).
*/