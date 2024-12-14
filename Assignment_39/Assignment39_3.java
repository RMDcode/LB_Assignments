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
        System.out.println("Enter the elements : ");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sObj.nextInt();
        }
    }

    public int LastOcc()
    {
        int iCnt = 0;
        for(iCnt = Arr.length - 1 ; iCnt >= 0 ; iCnt --)
        {
            if(Arr[iCnt] == iNo)
            {   
                return iCnt;
            }
        }

        return -1;
    }
}

class Assignment39_3
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iRet = 0, iLength = 0, iNum = 0;

        System.out.println("How many elements do you want : ");
        iLength = sObj.nextInt();

        System.out.println("Enter number : ");
        iNum = sObj.nextInt();

        Number nObj = new Number(iLength, iNum);
        
        nObj.Accept();
        iRet = nObj.LastOcc();

        System.out.println("Output : "+iRet);
    }
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>javac Assignment39_3.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_3
How many elements do you want :
6
Enter number :
66
Enter the elements :
85
66
3
66
93
88
Output : 3

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_3
How many elements do you want :
6
Enter number :
93
Enter the elements :
85
66
3
66
93
88
Output : 4

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_39>java Assignment39_3
How many elements do you want :
6
Enter number :
12
Enter the elements :
85
11
3
15
11
111
Output : -1
*/
