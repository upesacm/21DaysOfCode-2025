package Day_9;
//Find the first character that appears only once, or return -1 if none exists.
import java.util.Scanner;
public class FirstNonRepeatingChar {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a Word:");
        String str=sc.next();

        int i,j,count;
        for(i=0;i<str.length();i++) {
            count=0;
            char ch1 = str.charAt(i);
            for (j = 0; j <str.length(); j++) {
                char ch2 = str.charAt(j );
                if (ch1 == ch2) {
                    count++;
                }
            }
            if (count == 1) {
                System.out.println(str.charAt(i));
                return;
            }
        }
        System.out.println("-1");
    }
}
