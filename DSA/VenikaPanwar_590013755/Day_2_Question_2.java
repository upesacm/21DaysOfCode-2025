import java.util.*;
class FirstLastElement
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        //Input like {1 2 3 4 5}
        System.out.println("Enter the array in this format: {1 2 3 4 5}");
        String arr = sc.nextLine();
        
        //Remove brackets
        arr = arr.replace("{","");
        arr = arr.replace("}","");
        
        //Remove leading and trailing spaces as well as split by space
        String[] parts = arr.trim().split(" ");
        
        //Convert first and last to integers
        int first = Integer.parseInt(parts[0]);
        int last = Integer.parseInt(parts[parts.length - 1]);
        
        //Output
        System.out.println("First: " + first +  ", Last: " + last);
    }
}
