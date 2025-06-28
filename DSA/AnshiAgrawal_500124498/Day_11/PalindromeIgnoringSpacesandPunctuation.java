package Day_11;

import java.lang.*;
import java.util.Scanner;

public class PalindromeIgnoringSpacesandPunctuation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence:");
        String str = sc.nextLine();

        //removed spaces,case-sensitivity,punctuation
        str= str.toLowerCase().replaceAll("[^a-z0-9]", "");
        
        int i;
        String rev = "";

        for (i = (str.length() - 1); i >= 0; i--) { //obtained reverse string
            rev =rev + str.charAt(i);
        }

        System.out.println("String:"+str);
        System.out.println("Reversed String:"+rev);
        if (rev.equals(str)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
    }