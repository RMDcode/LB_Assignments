import java.util.*;

class Digit
{
    public int iNo = 0;

    public Digit(int A)
    {
        iNo = A;
    }

    public int CountEven()
    {
        int iDigit = 0, iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCnt ++;
            }
            
            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Assignment38_1
{
    public static void main(String A[])
    {   
        Scanner sObj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the Decimal : ");
        iValue = sObj.nextInt();

        Digit dObj = new Digit(iValue); 

        iRet = dObj.CountEven();

        System.out.println("Output : "+iRet);
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>javac Assignment38_1.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_1
Enter the Decimal :
2395
Output : 1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_1
Enter the Decimal :
1018
Output : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_1
Enter the Decimal :
-1018
Output : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_1
Enter the Decimal :
8642
Output : 4

*/