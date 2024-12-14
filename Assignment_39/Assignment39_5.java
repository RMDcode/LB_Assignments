import java.util.*;

class Number 
{
    public int Arr[];

    public Number(int iLength)
    {
        Arr = new int[iLength];
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

    public int Product()
    {
        int iCnt = 0, iRet = 1;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] % 2 == 1)
            {   
                iRet = iRet *  Arr[iCnt];
            }
        }

        if(iRet == 1)
        {   
            iRet--;
            return iRet;
        }
        else
        {
            return iRet;
        }
    }
}

class Assignment39_5
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iRet = 0, iLength = 0;

        System.out.println("How many elements do you want : ");
        iLength = sObj.nextInt();

        Number nObj = new Number(iLength);
        
        nObj.Accept();
        iRet = nObj.Product();

        System.out.println("Output : "+iRet);
    }
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>javac Assignment39_5.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_5
How many elements do you want :
6
Enter the elements :
15
66
3
70
10
88
Output : 45

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>javac Assignment39_5.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_5
How many elements do you want :
6
Enter the elements :
44
66
72
70
10
88
Output : 0
*/
