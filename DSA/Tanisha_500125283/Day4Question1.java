// Problem Statement: Given an array nums of size n, find and return the minimum element in the array.  
// Task: Find and return the minimum element in the array. 
// Examples Input: nums = [4, 2, 7, 1, 9] 
// Output: 1


package DSA.Tanisha_500125283;

public class Day4Question1{
    public static int MinimumValue(int[] arr){
        if(arr== null || arr.length==0){
            throw new IllegalArgumentException("Array is empty");
        }
        int minimum_value=arr[0];
        for(int num:arr){
            if(num<minimum_value){
                minimum_value=num;
            }
        }
        return minimum_value;
    }
        public static void main(String[] args) {
        int[] nums = {4,2,7,1,9};
        System.out.println("Minimum element: " + MinimumValue(nums));
        }
    }