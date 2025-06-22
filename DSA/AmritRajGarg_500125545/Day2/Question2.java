/* 
Q. Find First and Last Element
A problem that teaches array indexing and accessing elements at specific positions.
Given an array nums of size n, return the first element and the last element of the array as a pair.
This problem teaches you about array indexing and how to access elements at specific positions,
which is fundamental for understanding array boundaries and element positioning.
*/

public class Question2 {
    public static void main(String[] args) {
        int[] nums = {69, 96, 21, 50, 66};

        int first = nums[0];
        int last = nums[nums.length - 1];

        System.out.println("First: " + first + ", Last: " + last);
    }
}
