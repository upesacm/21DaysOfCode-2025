// Problem Statement: Given an array nums of size n and an integer k, rotate the array to the right by k steps. 
// Return the rotated array. 
// Your task: Rotate the array to the right by k steps and return the rotated array. 
// Examples Input: nums = [10, 20, 30], k = 4 
// Output: [30, 10, 20]

package DSA.Tanisha_500125283;
import java.util.Arrays;

public class Day4Question2 {

    public static int[] rotateArray(int[] nums, int k) {
        int n = nums.length;
        k = k % n; // 

        int[] rotated = new int[n];

        // Copy last k elements to the front
        // System.arraycopy(sourceArray, sourceStartIndex, destinationArray, destinationStartIndex, length);
        // Copy the last k elements from nums to the start of rotated.
        System.arraycopy(nums, n - k, rotated, 0, k);
        
        // Copy the remaining elements to the rest
        System.arraycopy(nums, 0, rotated, k, n - k);

        return rotated;
    }

    public static void main(String[] args) {
        int[] nums1 = {10,20,30};
        int k = 4;
        System.out.println("Rotated: " + Arrays.toString(rotateArray(nums1, k)));  // [4, 5, 1, 2, 3]
    }
}
 
