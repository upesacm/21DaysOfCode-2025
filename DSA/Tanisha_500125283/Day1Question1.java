// Problem Statement: 
// Given an array nums of size n, replace all negative numbers in the array with zero. Return the 
// modified array. 
// Task: Replace all negative numbers in the array with zero and return the modified array. 
// Examples Input: nums = [-1, 2, -3, 4, 5] 
// Output: [0, 2, 0, 4, 5]

package DSA.Tanisha_500125283;

import java.util.Arrays;

public class Day1Question1 {
    public static int[] replace(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < 0) {
                arr[i] = 0;
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        int[] arr = {-1, 2, -3, 4, 5};
        int[] result = replace(arr);
        System.out.println(Arrays.toString(result)); // We are using Arrays.toString to convert the array into string like [0, 2, 0, 4, 5]
    }
}
