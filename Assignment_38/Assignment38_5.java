import java.util.*;

class Digit
{
    public int iNo = 0;

    public Digit(int n)
    {
        iNo = n;
    }

    public int CountDiff()
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0, iTotal = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2  == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else if(iDigit % 2  == 1)
            {
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo / 10;
        }

        iTotal = iSumEven - iSumOdd ;

        return iTotal;
    }
}

class Assignment38_5
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the decimal : ");
        iValue = sObj.nextInt();

        Digit dObj = new Digit(iValue);

        iRet = dObj.CountDiff();

        System.out.println("Output : "+iRet);
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>javac Assignment38_5.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_5
Enter the decimal :
2395
Output : -15

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_5
Enter the decimal :
1018
Output : 6

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_5
Enter the decimal :
8440
Output : 16

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_5
Enter the decimal :
5733
Output : -18
*/
