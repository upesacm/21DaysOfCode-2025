// Problem Statement: Given two arrays, determine if both contain the same elements with the same frequency, 
//regardless of their order. Return true if they are equal, else return false. 
// Task: Determine if two arrays contain the same elements with the same frequencies. 
// Examples Input: nums1 = [1, 2, 3, 4], nums2 = [4, 3, 2, 1] 
// Output: true 


package DSA.Tanisha_500125283;

import java.util.Arrays;

public class Day2Question3 {
    public static boolean Compare(int[] arr1, int[] arr2){
        if(arr1.length!= arr2.length){
            return false;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for(int i=0; i<arr1.length; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;

    }
    public static void main(String[] args){
        int[] arr1={1,2,3,4};
        int[] arr2={4,3,2,1};
        Boolean result=Compare(arr1,arr2);
        System.out.println(result);
    }
    
}
