package Day_10;

import java.util.Scanner;

//Two strings are anagrams if they contain the same characters with the same frequency, but possibly in different order. Write a program to check if two given strings are anagrams of each other. Ignore case and spaces for this comparison.
public class Anagram {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st word:");
        String str1=sc.nextLine().toLowerCase().replaceAll(" ","") ;
        System.out.println("Enter 2nd word");
        String str2=sc.nextLine().toLowerCase().replaceAll(" ","") ;

        if(str1.length()!=str2.length()) {
            System.out.println("False,Not Anagrams length not same");
            return;
        }

        char ch;
        int j,count1,count2;

        for(ch='a';ch<='z';ch++) {
            count2=count1=0;
            for (j = 0; j < str1.length(); j++) {
                if(ch==str1.charAt(j))
                    count1++;
                if (ch==str2.charAt(j))
                    count2++;
            }
            if (count1 != count2) {
                System.out.println(" False,Not Anagrams");
                return;
            }
        }
            System.out.println("true, Anagrams");

    }
}
