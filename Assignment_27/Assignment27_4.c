#include<stdio.h>
#include<stdbool.h>

int ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {   
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {   
            bFlag = true;
            break;           
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20];
    char *ptr = Arr;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>gcc Assignment27_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : marvellous
Contains Vowel

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : Demo
Contains Vowel

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_27>Myexe
Enter String : xyz
There is no Vowel
*/