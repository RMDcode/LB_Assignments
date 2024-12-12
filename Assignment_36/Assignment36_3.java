import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCnt = 0, iCountCap = 0 , iCountSma = 0, iTotal = 0;

        while(iCnt < str.length())
        {
            if(str.charAt(iCnt) >= 'a' && str.charAt(iCnt) <= 'z')
            {
                iCountSma ++;
            }
            else if(str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z')
            {
                iCountCap ++;
            }

            iCnt ++;
        }

        iTotal = iCountSma - iCountCap  ;

        return iTotal;
    }
}

class Assignment36_3
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iRet = 0;
        String str = "";

        System.out.println("Enter String : ");
        str = sObj.nextLine();

        StringDemo stObj = new StringDemo();

        iRet = stObj.CountDiff(str);

        System.out.println("Output : "+iRet);

        sObj.close();
    }
}
/*

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>javac Assignment36_3.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_3
Enter String :
MarvellouS
Output : 6
*/
