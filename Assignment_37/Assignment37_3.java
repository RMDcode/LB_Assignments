import java.util.*;

class ArrayDemo
{
    public int Arr[];

    public ArrayDemo(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sObj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sObj.nextInt();
        }
    }

    public void Difference()
    {
        int iCnt = 0;
        System.out.println("Below number is Even and divisible by 5 : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}

class Assignment37_3
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iLength = 0;

        System.out.println("Enter the length : ");
        iLength = sObj.nextInt();

        ArrayDemo aObj = new ArrayDemo(iLength);
        aObj.Accept();
        aObj.Difference();
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>javac Assignment37_3.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>java Assignment37_3
Enter the length :
6
Enter the elements :
85
66
3
80
93
88
Below number is Even and divisible by 5 :
80
*/