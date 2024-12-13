import java.util.*;

class Digit
{
    public int iNo = 0;

    public Digit(int i)
    {
        iNo = i;
    }

    public int CountOdd()
    {
        int iDigit = 0, iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 1)
            {
                iCnt ++;
            }

            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Assignment38_2
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the Decimal : ");
        iValue = sObj.nextInt();

        Digit dObj = new Digit(iValue);
        iRet = dObj.CountOdd();    

        System.out.println("Output : "+iRet);
    }
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_2
Enter the Decimal :
2395
Output : 3

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_2
Enter the Decimal :
1018
Output : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_2
Enter the Decimal :
-1018
Output : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_2
Enter the Decimal :
8462
Output : 0
*/