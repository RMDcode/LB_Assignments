import java.util.*;

class Digit
{
    public int iNo = 0;

    public Digit(int i)
    {
        iNo = i;
    }

    public int Multiply()
    {
        int iDigit = 0, iMult = 1 ;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if( iDigit == 0 )
            {
                iDigit = 1;
            }

            iMult = iDigit * iMult;

            iNo = iNo / 10;
        }

        return iMult;
    }
}

class Assignment38_4
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the Decmial : ");
        iValue = sObj.nextInt();

        Digit dObj = new Digit(iValue);

        iRet = dObj.Multiply();

        System.out.println("Output : "+iRet);
    }
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>javac Assignment38_4.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_4
Enter the Decmial :
2395
Output : 270

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_4
Enter the Decmial :
1018
Output : 8

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_4
Enter the Decmial :
9440
Output : 144

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_38>java Assignment38_4
Enter the Decmial :
922432
Output : 864

*/