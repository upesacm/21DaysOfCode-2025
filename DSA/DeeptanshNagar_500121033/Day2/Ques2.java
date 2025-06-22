// DAY 2 <-----/---> QUE 2

// 2. Find First and Last Element
// A problem that teaches array indexing and accessing elements at specific positions.

// Given an array nums of size n, return the first element and the last element of the array as a pair.

// This problem teaches you about array indexing and how to access elements at specific positions, which is fundamental for understanding array boundaries and element positioning.

// Your task: Return the first and last elements of the array.

// Examples

// Input:
// nums = [1, 2, 3, 4]
// Output:
// First: 1, Last: 4

// Input:
// nums = [7]
// Output:
// First: 7, Last: 7

// Input:
// nums = [5, 9, 2]
// Output:

// First: 5, Last: 2



public class Ques2 {
    public static void main(String[] args) {
        int[] nums = {5, 9, 2};
        int[] result = firstLast(nums);
        System.out.println("First: " + result[0] + ", Last: " + result[1]);
    }

    static int[] firstLast(int[] nums) {
        int first = Integer.MIN_VALUE;
        int last = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if(i == 0) {
                first = nums[i];
            } else if (i == nums.length - 1) {
                last = nums[i];
            }
        }
        return new int[]{first, last};
    }
}

// Time Comp. = O(N)
// Space Comp. = O(1)
