#include<stdio.h>

int WhiteSpace(char *Str)
{
    static int iCnt = 0;

    if( *Str != '\0' )
    {
        if( *Str == ' ' )
        {
            iCnt++;
        }
        Str ++;
        WhiteSpace(Str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("Count white space : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>gcc Assignment43_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter string : HE llo WOr ID
Count white space : 3
*/