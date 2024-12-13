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
        Scanner sObj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the elements : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sObj.nextInt(); 
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Below Elements are multiplies of 11");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] % 11 == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}

class Assignment37_5
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

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>javac Assignment37_5.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_37>java Assignment37_5
Enter the length :
6
Enter the elements :
85
66
3
55
93
88
Below Elements are multiplies of 11
66
55
88
*/
