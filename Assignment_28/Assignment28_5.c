#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {   
        if(*str == ' ')
        {
            iCnt ++;
        }
        str ++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>gcc Assignment28_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : MarvellouS
0
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : MarvellouS InfosystemS
1
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_28>Myexe
Enter string : Marvellous Infosystems by Piyush Manohar Khairnar
5
*/