#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {   
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtogglex(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : Marvellous Multi OS
Modified string is : mARVELLOUS mULTI os
*/