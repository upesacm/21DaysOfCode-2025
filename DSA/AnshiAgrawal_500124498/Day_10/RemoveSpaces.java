package Day_10;

import java.util.Scanner;

// Implement three space removal operations: all spaces, trim, and single spaces.
public class RemoveSpaces {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Sentence:");
        String str=sc.nextLine();
        System.out.println("Original string: "+str+"\tlength:"+ str.length());

        //allspaces
        String str2= str.replace(" ","");
        System.out.print("All spaces:"+str2);
        System.out.println("\tlength:"+str2.length());

        //trimmed:
        System.out.print("Trimmed:"+str.trim());
        System.out.println("\tlength:"+str.trim().length());

        //single space
        str2=str.replaceFirst(" ","");
        System.out.print("Single Space:"+str2);
        System.out.println("\tlength:"+str2.length());
    }
}
