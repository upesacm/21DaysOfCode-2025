// A program to do the sum of all even numbers given in the form of space separated array
import java.util.*;
class SumEven
{
 public static void main(String args[]) 
 {
     Scanner sc = new Scanner(System.in);
     
     // Take input like {1 2 3 4 5}
     System.out.println("Enter array in this format: {1 2 3 4 5}");
     String arr = sc.nextLine();
     
     //Remove curly brackets
     arr = arr.replace("{"," ");
     arr = arr.replace("}"," ");
     
     // Remove leading and trailing spaces as well as spliting by space
     String[] parts = arr.trim().split(" ");
     
     //Convert to integer array and sum the even numbers
     int sum = 0;
     for(int i = 0; i < parts.length; i++)
     {
         int num = Integer.parseInt(parts[i]);
         if(num % 2 == 0)
         {
         sum += num;
         }
     }
     // Print result
     System.out.println("Sum of even numbers: " + sum);
 }
}
