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
        System.out.println("Enter your elements : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sObj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Below numbers divisible by 5 : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if( Arr[iCnt] % 5 == 0 )
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}

class Assignment37_2
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iLength = 0;

        System.out.println("Enter the length : ");
        iLength = sObj.nextInt();

        ArrayDemo aObj = new ArrayDemo(iLength);

        aObj.Accept();
        aObj.Display();
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>javac Assignment37_2.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>java Assignment37_2
Enter the length :
6
Enter your elements :
85
66
3
80
93
88
Below numbers divisible by 5 :
85
80
*/