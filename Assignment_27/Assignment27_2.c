#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {   
        if(*str >= 'a' && *str <= 'z')
        {   
            iCnt++;
            
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>gcc Assignment27_2.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : Marvellous
9

*/