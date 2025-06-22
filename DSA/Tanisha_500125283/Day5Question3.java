// Problem Statement: Given an array nums of size n, determine if the array is a palindrome (reads the same 
// forwards and backwards). Return true if it is, otherwise false. 
// Task: Determine if the array is a palindrome and return true or false. 
// Examples Input: nums = [1, 2, 3, 2, 1] 
// Output: true


package DSA.Tanisha_500125283;

public class Day5Question3{
    public static boolean checkPalindrome(int[] nums){
        int left=0;
        int right=nums.length -1;
        while(left<right){
            if(nums[left]!=nums[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    public static void main(String[] args){
        int[] nums={1,2,3,2,1};
        System.out.println(checkPalindrome(nums));
    }
}