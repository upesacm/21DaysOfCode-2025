import java.util.*;
public class Day_6_Question_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        //Take input of an array in the format:{1 2 3 4 }
        System.out.println("Enter an array in the format:{1 2 3 4}");
        String arr = sc.nextLine();
        
        //Remove {}
        arr = arr.replace("{"," ").replace("}"," ");
        
        //Trim the leading and the trailing spaces as well split over " "
        String[] parts = arr.trim().split(" ");
        
        //Convert the string into integer
        int[] nums = new int[parts.length];
        for (int i = 0; i < parts.length; i++) 
        {
            nums[i] = Integer.parseInt(parts[i]);
        }
        
        //Checking if the array is strictly increasing or not
        boolean isIncreasing = true;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]) {
                isIncreasing = false;
                break;
            }
        }

        System.out.println("Is strictly increasing? " + isIncreasing);
    }
}
