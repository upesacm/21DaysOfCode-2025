// Problem Statement: Given an array nums of size n, find the second largest unique element in the array. If it 
// doesn't exist (e.g., all elements are the same), return -1. 
// Task: Find the second largest unique element in the array, or return -1 if it doesn’t exist.
// Examples Input: nums = [5, 5, 5] 
// Output: -1

package DSA.Tanisha_500125283;
import java.util.*;
public class Day3Question3 {
    public static int findingSecondLargest(int[] arr){
        // used hashset because hashset automatically ignores duplicate elements
        Set<Integer> unique = new HashSet<>();
        for(int num:arr){
            unique.add(num);
        }
        
        //used this because if the set has less than 2 unique numbers then we can't find second largest
        if(unique.size()<2){
            return -1;
        }

        // used Integer.MIN_VALUE  to initialize max and secondMax to compare them
        int max= Integer.MIN_VALUE;
        int secondmax=Integer.MIN_VALUE;


        for (int num : unique) {
            if (num > max) {
                secondmax = max;
                max = num;
            } else if (num > secondmax) {
                secondmax = num;
            }
        }

        return secondmax;
    }

    public static void main(String[] args) {
        int[] arr = {5,5,5};
        System.out.println(findingSecondLargest(arr));
    }
}










