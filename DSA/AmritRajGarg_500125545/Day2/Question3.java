/*
3. Check if Two Arrays are Equal
A problem that introduces frequency counting and comparison techniques for data structure equality.
Given two arrays, determine if both contain the same elements with the same frequency, regardless of their order.
Return true if they are equal, else return false.
This problem introduces you to frequency counting and comparison techniques, which are essential for understanding how to compare data structures 
and verify equality beyond simple element-by-element comparison.
*/

import java.util.Arrays;

public class Question3 {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 2, 4};
        int[] arr2 = {2, 1, 2, 3, 4};

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        boolean isEqual = Arrays.equals(arr1, arr2);
        System.out.println("Arrays are equal: " + isEqual);
    }
}
