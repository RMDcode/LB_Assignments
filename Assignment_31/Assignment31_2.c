#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    char *end = src;

    while(*end != '\0')
    {
        end ++;
    }
    end --;
    
    while(end == " ")
    {
        dest ++;
        end --;
    }

    *dest = '\0';
}

int main()
{
    char arr[30]="Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}