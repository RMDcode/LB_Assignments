#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *end = src;

    while(*end != '\0')
    {
        end ++;
    }
    end --;
    
    while(end >= src)
    {
        *dest = *end;

        dest ++;
        end --;
    }

    *dest = '\0';
}

int main()
{
    char arr[30]="Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_31>gcc Assignment31_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_31>Myexe
nohtyP suollevraM
*/