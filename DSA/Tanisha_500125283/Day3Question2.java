// Problem Statement: Given an array nums of size n, return true if any value appears more than once, otherwise 
// return false.  
// Task: Return true if any value appears more than once, otherwise return false. 
// Examples Input: nums = [1, 2, 3, 4] 
// Output: false

package DSA.Tanisha_500125283;
import java.util.*;
public class Day3Question2  {
    public static boolean Duplicate(int[] nums) {
        Set<Integer> duplicate = new HashSet<>();
        for (int num : nums) {

            if (!duplicate.add(num)) {
                return true;  // It will return true if no. is already in the set
            }
        }
        return false;  // It will return false if no duplicate is there
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4};
        System.out.println(Duplicate(nums));  
    }
}
