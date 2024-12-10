#include<stdio.h>

int Strlen(char *Str)
{
    static int iCnt = 0;

    if(*Str != '\0')
    {
        iCnt ++;
        Str ++;
        Strlen(Str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Output : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>gcc Assignment42_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_42>Myexe
Enter String : Hello
Output : 5

*/