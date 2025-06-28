package Day_8;

import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string:");
        String str= sc.nextLine();
        System.out.print("\nLength:"+ str.length());
        System.out.print("\tOrignial:"+str);
        System.out.print("\tUppercase:"+str.toUpperCase());
        System.out.print("\tLowercare:"+str.toLowerCase());
    }
}
