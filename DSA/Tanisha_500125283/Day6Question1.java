// Problem Statement: Given an integer array of n+1 integers where each integer is between 1 and n (inclusive), find 
// one duplicate number that appears in the array. 
// Task: Find one duplicate number that appears in the array. 
// Examples Input: nums = [1, 3, 4, 2, 2] 
// Output: 2 


package DSA.Tanisha_500125283;

import java.util.HashSet;

public class Day6Question1{
    public static int findDuplicates(int[] nums){
        HashSet<Integer> seen= new HashSet<>();
        for(int num:nums){
            if(seen.contains(num)){
                return num;
            }
            seen.add(num);
        }
        return -1;
    }
    public static void main(String[] args){
        int[] nums = {1, 3, 4, 2, 2};
        System.out.println(findDuplicates(nums));
    }
}