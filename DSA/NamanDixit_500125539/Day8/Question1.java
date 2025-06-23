import java.util.*;
class Question1{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter String: ");
        str=sc.nextLine();

        int n=str.length();
        System.out.println("Length: "+n);

        System.out.println("Original: "+str);

        System.out.println("UpperCase: "+ str.toUpperCase());

        System.out.println("LowerCase: "+ str.toLowerCase());
    }
}
