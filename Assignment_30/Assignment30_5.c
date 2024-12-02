#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter your decision : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>gcc Assignment30_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter your decision : c
Your exam at 9.20 AM

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter your decision : d
Your exam at 10.30 AM

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_30>Myexe
Enter your decision : A
Your exam at 7 AM

*/