package Day_9;

import java.util.Scanner;

//Check if a string is a palindrome (case-insensitive, alphabetic characters only).
public class Palindrome {
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
        if(str.equals(rev))
            System.out.println("true,string is palindrome");
        else
            System.out.println("false,string is not palindrome");
    }
}
