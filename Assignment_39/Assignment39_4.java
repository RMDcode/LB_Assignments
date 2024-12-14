import java.util.*;

class Number 
{
    public int Arr[];
    public int iStart = 0, iEnd = 0;


    public Number(int iLength, int iS, int iE )
    {
        Arr = new int[iLength];
        iStart = iS;
        iEnd = iE;
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
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
            {   
                System.out.println("Output : "+Arr[iCnt]);        
            }
        }
    }
}

class Assignment39_4
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iLength = 0, iStart = 0, iEnd = 0;

        System.out.println("How many elements do you want : ");
        iLength = sObj.nextInt();

        System.out.println("Enter Start number : ");
        iStart = sObj.nextInt();

        System.out.println("Enter End number : ");
        iEnd = sObj.nextInt();

        Number nObj = new Number(iLength, iStart, iEnd);
        
        nObj.Accept();
        nObj.Display();

        
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>javac Assignment39_4.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_4
How many elements do you want :
6
Enter Start number :
60
Enter End number :
90
Enter the elements :
85
66
3
76
93
88
Output : 85
Output : 66
Output : 76
Output : 88

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_4
How many elements do you want :
6
Enter Start number :
30
Enter End number :
50
Enter the elements :
85
66
3
76
93
88
*/
