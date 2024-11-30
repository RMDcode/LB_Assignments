#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iDifference = 0;

    while(*str != '\0')
    {   
        if(*str >= 'a' && *str <= 'z')
        {   
            iCountSmall++;           
        }
        if(*str >= 'A' && *str <= 'Z')
        {   
            iCountCapital++;           
        }
        str++;
    }

    iDifference = iCountSmall - iCountCapital;

    return iDifference;
}

int main()
{
    char Arr[20];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>gcc Assignment27_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : MarvellouS
6
*/