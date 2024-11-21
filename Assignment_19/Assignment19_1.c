#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cChar = '\0';

    for( iCnt = 1, cChar = 'A' ; iCnt <= iNo ; iCnt ++, cChar ++ )
    {
        printf("%c\t",cChar);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>gcc Assignment19_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_19>Myexe
Enter number of elements : 5
A       B       C       D       E
*/