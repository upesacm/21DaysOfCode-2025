// Problem Statement: Given a non-empty array of integers nums, where every element appears exactly twice except 
// for one element that appears only once, find and return the element that appears only once. 
// Task: Find and return the element that appears only once in the array. 
// Examples Input: nums = [4, 1, 2, 1, 2] 
// Output: 4


package DSA.Tanisha_500125283;
public class Day5Question1{
    public static int findUnique(int[] nums){
        int unique=0;
        for(int num:nums){
            unique^=num;
        }
        return unique;
    }
    public static void main(String[] args){
        int[] nums={4,1,2,1,2};
        System.out.println(findUnique(nums));
    }
    
}