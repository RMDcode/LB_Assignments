#include<stdio.h>

void Reverse(char *str)
{
    char *p = str;

    printf("Output: \t");

    while(*p != '\0')
    {          
        p++;
    }
    p --;

    while(p >= str)
    {
        printf("%c",*p);
        p --;
    }
    
}

int main()
{
    char Arr[20];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>gcc Assignment27_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : MarvellouS
Output:         SuollevraM
*/