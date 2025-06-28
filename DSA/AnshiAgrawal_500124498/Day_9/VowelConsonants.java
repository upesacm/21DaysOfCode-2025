package Day_9;
//Count vowels and consonants separately, ignoring non-alphabetic characters.

import java.util.Scanner;
public class VowelConsonants {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a word:");
        String str= sc.next();

        int vowels=0,consonants=0;
        for (int i = 0; i < str.length(); i++) {
            char ch = Character.toLowerCase(str.charAt(i));
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else if (Character.isLetter(ch)) {
                consonants++;
            }
        }
        System.out.println("No. of Vowels:"+vowels);
        System.out.println("No. of Consonants:"+consonants);
    }
}
