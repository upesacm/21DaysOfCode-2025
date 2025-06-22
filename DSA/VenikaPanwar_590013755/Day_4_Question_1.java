import java.util.*;
public class Day_4_Question_1
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        {
            //Take input of an array in this format: {1 2 3 4 5}
            System.out.println("Enter the array in this format:{1 2 3 4}");
            String arr = sc.nextLine();
            
            //Remove the {}, the leading and trailing spaces also split over (" ")
            arr = arr.replace("{","").replace("}","");
            String[] parts = arr.trim().split(" ");
            
            //Convert into integer
            int n = parts.length;
            int[] nums = new int[n];
            for( int i = 0; i < n; i++)
            {
                nums[i] = Integer.parseInt(parts[i]);
            }
            
            //Checking for thw smallest element
            int smallestno = nums[0];
            for(int j = 0; j < n; j++)
            {
                if(nums[j] <= smallestno)
                smallestno = nums[j];
            }
            
            //Output
            System.out.println("The smallest element: " + smallestno);
        }
    }
}
