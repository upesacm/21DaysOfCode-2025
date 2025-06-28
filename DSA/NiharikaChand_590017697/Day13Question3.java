import java.util.*;
class Day13Question3 
{
    public static String reverse(String s) 
    {
        int i, j = s.length(); 
        StringBuilder rev = new StringBuilder();
        for (i = s.length() - 1; i >= 0; i--) 
        {
            if (s.charAt(i) == ' ') 
            {
                rev.append(s.substring(i + 1, j)).append(" "); 
                j = i; 
            }
        }
        rev.append(s.substring(0, j));

        return rev.toString().trim(); 
    }

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine().trim();

        if (str.isEmpty()) 
        {
            return;
        }

        String result = reverse(str);
        System.out.println(result);
    }
}


