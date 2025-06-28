package Day_8;
//Count the occurrences of a specific character in a string (case sensitive).
import java.util.Scanner;
public class CharacterCount {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String:");
        String str= sc.nextLine();
        System.out.println("Enter Character:");
        char ch = sc.next().charAt(0);
        int count=0;
        for(int i=0;i<str.length();i++){
            if(ch==str.charAt(i))
                count++;
        }
        System.out.println(ch+" occurs "+count+ " times");
    }
}
