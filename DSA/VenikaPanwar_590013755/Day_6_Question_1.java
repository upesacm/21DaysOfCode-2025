import java.util.*;
public class Day_6_Question_1
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
        
        //Checking for duplicate
        boolean found = false;
        for(int i = 0; i < parts.length; i++)
        {
            for(int j = i + 1; j < parts.length; j++)
            {
                if(nums[i] == nums[j])
                {
                    System.out.println("Duplicate number is: " + nums[i]);
                    found = true;
                    break;
                }
            }  
            if (found) break;
        }
        if (!found)
        {
            System.out.println("No duplicate found!");
        }
    }
}
