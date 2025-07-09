import java.util.*;
public class question3 {
    public static void main(String[] args) {
        System.out.println(isAnagram("They See", "The Eyes"));
    }
    public static boolean isAnagram(String s , String t){

        s = s.replaceAll("\\s", "").toLowerCase();
         t = t.replaceAll("\\s", "").toLowerCase();
        char ch[] = s.toCharArray();
        Arrays.sort(ch);
        String s1 = new String(ch);
       

        char c[] = t.toCharArray();
        Arrays.sort(c);
        String s2 = new String(c);
      

        if(s1.equals(s2)){
            return true;
        }
        return false;
    }
    
}
