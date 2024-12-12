import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0, iCount = 0;

        while( iCnt < str.length() )
        {
            if(str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z' )
            {
                iCount++;
            }
            iCnt ++; 
        }
        return iCount;
    }
}


class Assignment36_1
{
    public static void main(String A[])
    {   
        Scanner sObj = new Scanner (System.in);

        String str = "";
        int iRet = 0;

        System.out.println("Enter String : ");
        str = sObj.nextLine();

        StringDemo stObj = new StringDemo();

        iRet = stObj.CountCapital(str);

        System.out.println("Output : "+iRet);

        sObj.close();
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>javac Assignment36_1.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_1
Enter String :
Marvellous Multi OS
Output : 4
*/
