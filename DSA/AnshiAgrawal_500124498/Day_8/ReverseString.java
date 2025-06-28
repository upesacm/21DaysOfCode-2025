package Day_8;
//print reverse and original string
import java.util.Scanner;
public class ReverseString {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a word:");
        String str= sc.next();
        String rev="";
        
        for(int i=(str.length()-1);i>=0;i--){
            rev += str.charAt(i);
        }
        System.out.println("Original:"+str);
        System.out.println("Reverse:"+rev);
    }
}
