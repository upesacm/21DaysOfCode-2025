import java.util.*;
class Day13Question2 
{
    public static boolean palinCheck(String s) 
    {
        int freq[] = new int[26];  // this array counts char frequence
        int i, c = 0;
        for (i = 0; i < s.length(); i++) 
        {
            char ch = s.charAt(i);
            if (Character.isLetter(ch)) 
            { 
                freq[ch - 'a']++;
            }
        }

        // Count odd frequencies
        int oddFreq = 0;
        for (i = 0; i < freq.length; i++) 
        {
            c = freq[i];
            if (c % 2 != 0) 
            {
                oddFreq++;
            }
            if (oddFreq > 1) 
            {
                return false; 
            }
        }

        return true; 
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine().toLowerCase();
        boolean result = palinCheck(str);
        System.out.println(result);
    }
}

