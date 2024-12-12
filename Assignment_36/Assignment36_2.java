import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {   
        int iCnt = 0, iCount = 0;

        while(iCnt < str.length())
        {
            if(str.charAt(iCnt) >= 'a' && str.charAt(iCnt) <= 'z' )
            {
                iCount ++;
            }
            iCnt ++;
        }
        return iCount;
    }
}

class Assignment36_2
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        String str = "";
        int iRet = 0;

        System.out.println("Entet String : ");
        str = sObj.nextLine();

        StringDemo stObj = new StringDemo();

        iRet = stObj.CountSmall(str);

        System.out.println("Output : "+iRet);

        sObj.close();
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>javac Assignment36_2.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_2
Entet String :
Marvellous
Output : 9
*/
