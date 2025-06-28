import java.util.*;
class Day13Question1 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        str = str.trim() + " ";
        int i, c=0, l=0, idx=0;
        String wrd = "", w = "";  
        for(i=0; i<str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                wrd = str.substring(idx, i);
                if (wrd.isEmpty() != true)
                {
                    c++; 
                    if (wrd.length() > l) 
                    {
                        w = wrd;  
                        l = wrd.length();
                    }
                }
                idx = i + 1; 
            }
        }
        System.out.println("Word count: " + c);
        System.out.println("Longest word: "+ w);   
    }
}
