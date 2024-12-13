import java.util.*;

class ArrayDemo
{
    public int Arr[];

    public ArrayDemo(int iLength)
    {
       Arr = new int[iLength];  
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sObj = new Scanner(System.in);

        System.out.println("Entere the elements : \n");
        for( iCnt = 0 ; iCnt < Arr.length ; iCnt ++ )
        {
            Arr[iCnt] = sObj.nextInt();
        }
    }

    public int Difference()
    {   
        int iCnt = 0, iEvenCount = 0, iOddCount = 0, iTotal = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] % 2 ==  0 )
            {
                iEvenCount = iEvenCount + Arr[iCnt];
            }
            else if(Arr[iCnt] % 2 ==  1 )
            {
                iOddCount = iOddCount + Arr[iCnt];
            }
        }

        iTotal = iEvenCount - iOddCount;

        return iTotal;
    }
}

class Assignment37_1
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iSize = 0, iRet = 0;

        System.out.println("Enter number of elements : ");
        iSize = sObj.nextInt();

        ArrayDemo aObj = new ArrayDemo(iSize);
        aObj.Accept();

        iRet = aObj.Difference();

        System.out.println("Difference is : "+iRet);
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>javac Assignment37_1.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>java Assignment37_1
Enter number of elements :
6
Entere the elements :

85
66
3
80
93
88
Difference is : 53
*/
