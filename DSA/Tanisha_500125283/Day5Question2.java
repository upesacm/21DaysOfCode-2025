// Problem Statement: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is 
// missing from the array. 
// Task: Find the missing number from the sequence 0 to n. 
// Examples Input: nums = [3, 0, 1] 
// Output: 2


package DSA.Tanisha_500125283;

public class Day5Question2{
    public static int findMissing(int[] nums){
        int n=nums.length;
        int expectedSum=n*(n+1)/2;
        int actualSum=0;

        for(int num:nums){
            actualSum+=num;
        }
        return expectedSum-actualSum;
    }
    public static void main(String[] args){
        int[] nums={3,0,1};
        System.out.println(findMissing(nums));

    }
}