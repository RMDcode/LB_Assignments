#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {   
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str ++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>gcc Assignment28_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : marve89llous121
89121
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : Demo

*/