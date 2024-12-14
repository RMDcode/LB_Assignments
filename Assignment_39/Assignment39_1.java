import java.util.*;

class Number
{   
    public int Arr[];
    public int iNo;

    public Number(int iLength, int iNum)
    {
        Arr = new int[iLength];
        iNo = iNum;
    }  

    public void Accept()
    {
        Scanner sObj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sObj.nextInt();  
        }
    }

    public boolean Check()
    {
        boolean  bRet = false;
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if(Arr[iCnt] == iNo)
            {
                bRet = true;
                break; 
            }
        }

        return bRet;
    }
}

class Assignment39_1
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iCnt = 0, iSize = 0;
        boolean bRet = false;

        System.out.println("How many elements do you want : ");
        iSize = sObj.nextInt();

        System.out.println("Enter the number : ");
        iCnt = sObj.nextInt();

        Number nObj = new Number(iSize, iCnt);
        nObj.Accept();
        
        bRet = nObj.Check();

        if(bRet == true)
        {
            System.out.println("Output : TRUE");
        }
        else
        {
            System.out.println("Output : FALSE");
        }
    }   
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>javac Assignment39_1.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_1
How many elements do you want :
6
Enter the number :
66
Enter elements :
85
66
3
66
93
88
Output : TRUE

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_1
How many elements do you want :
6
Enter the number :
12
Enter elements :
85
11
3
11
111
15
Output : FALSE
*/