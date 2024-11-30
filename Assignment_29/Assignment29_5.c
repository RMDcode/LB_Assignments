#include<stdio.h>
#include<stdbool.h>

void StrRevX(char *str)
{
  
    char *p = str;

    printf("Output :\t");
    while(*p != '\0')
    {
        p++;
    }

    p--;

    while(p >= str)
    {
        printf("%c",*p);
        p--;
    }

}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>gcc Assignment29_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : abcd
Output :        dcba
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_29>Myexe
Enter string : abba
Output :        abba
*/