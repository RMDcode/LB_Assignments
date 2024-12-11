#include<stdio.h>

int Small(char *Str)
{
    static int iCnt = 0;

    if(*Str != 0)
    {
        if(*Str >= 'a' && *Str <= 'z')
        {
            iCnt ++;
        }
        Str ++;
        Small(Str);
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
    char Arr[30];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);

    printf("Count number of small characters : %d\n",iRet);

    return 0;   
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>gcc Assignment43_3.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter String : HElloWOrld
Count number of small characters : 6

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_43>Myexe
Enter String : HElloWOrlD
Count number of small characters : 5
*/