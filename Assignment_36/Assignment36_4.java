import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {   
        int iCnt = 0;
        boolean bFlag = false;

        while(iCnt < str.length())
        {
            if(str.charAt(iCnt) == 'A' || str.charAt(iCnt) == 'E'|| str.charAt(iCnt) == 'I'|| str.charAt(iCnt) == 'O'|| str.charAt(iCnt) == 'U' || str.charAt(iCnt) == 'a'|| str.charAt(iCnt) == 'i'|| str.charAt(iCnt) == 'e'|| str.charAt(iCnt) == 'o'|| str.charAt(iCnt) == 'u' )
            {
                bFlag = true;
                break;
            }
            iCnt ++;
        }
        return bFlag;
    }
}

class Assignment36_4
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        boolean bRet = false;
        String str = "";

        System.out.println("Enter String : ");
        str = sObj.nextLine();

        StringDemo stObj = new StringDemo();

        bRet = stObj.ChkVowel(str);

        if(bRet == true)
        {
            System.out.println("Vowels are present\n");
        }
        else
        {
            System.out.println("Vowels are not present\n");
        }

    }
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>javac Assignment36_4.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_4
Enter String :
marvellous
Vowels are present


C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_4
Enter String :
Demo
Vowels are present


C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_4
Enter String :
xyz
Vowels are not present
*/
