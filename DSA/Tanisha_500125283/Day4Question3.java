// Problem Statement: Given an array nums of size n and a value val, remove all occurrences of val from the array. 
// Return the new length of the array after removals. 
// Task: Remove all occurrences of the given value and return the new length of the array. 
// Examples Input: nums = [3, 2, 2, 3], val = 3 
// Output: 2 (new array length after removals)

package DSA.Tanisha_500125283;

public class Day4Question3{

    public static int removeElement(int[] nums, int val) {
        int j = 0;  

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j;  
    }

    public static void main(String[] args) {
        int[] nums1 = {3, 2, 2, 3};
        System.out.println(removeElement(nums1, 3));
    }
}
