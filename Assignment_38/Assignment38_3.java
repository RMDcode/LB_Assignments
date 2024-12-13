import java.util.*;

class Digit
{
    public int iNo = 0;

    public Digit(int i)
    {
        iNo = i;
    }

    public int CountRange()
    {
        int iDigit = 0, iCnt = 0 ;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit > 3 && iDigit < 7)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Assignment38_3
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the Decmial : ");
        iValue = sObj.nextInt();

        Digit dObj = new Digit(iValue);

        iRet = dObj.CountRange();

        System.out.println("Output : "+iRet);
    }
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>javac Assignment38_3.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_3
Enter the Decmial :
2395
Output : 1

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_3
Enter the Decmial :
1018
Output : 0

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_3
Enter the Decmial :
4521
Output : 2

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_3
Enter the Decmial :
9922
Output : 0
*/