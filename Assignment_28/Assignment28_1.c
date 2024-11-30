#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {   
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str ++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>gcc Assignment28_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : Marvellous Multi OS
Modified string is : marvellous multi os
*/