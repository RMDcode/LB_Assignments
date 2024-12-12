import java.util.*;

class  StringDemo
{
    public void Reverse(String str)
    {
        char Arr[] = str.toCharArray();
        int iStart = 0;
        int iEnd = Arr.length - 1;
        char temp = '\0';

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart ++;
            iEnd --;
        }

        System.out.println("Reverse String : "+new String(Arr));
    }
}

class Assignment36_5
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        String str = "";

        System.out.println("Enter String : ");
        str = sObj.nextLine();

        StringDemo stObj = new StringDemo();
        stObj.Reverse(str);

        sObj.close();
    }
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>javac Assignment36_5.java

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_36>java Assignment36_5
Enter String :
MarvellouS
Reverse String : SuollevraM
*/