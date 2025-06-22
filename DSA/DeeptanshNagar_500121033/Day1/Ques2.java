// DAY 1 <-----/---> QUE 2

// 2. Missing and Repeated
// A problem that requires finding a missing number and a duplicate number in an array.

// Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, ...n} is missing and one number occurs twice in the array. The task is to find these two numbers.

// Your task: Find the missing number and the number that appears twice in the array.

// Examples
// Input:

// [3, 1, 3]
// Output:

// Missing: 2, Twice: 3

public class Ques2 {
    public static void main(String[] args) {
        int[] nums = {3, 1, 3};
        int[] result = findMissingAndDuplicate(nums);
        System.out.println("Missing: " + result[0] + ", Twice: " + result[1]);
    }

    // Striver's sir Approach
    static int[] findMissingAndDuplicate(int[] nums) {
        int n = nums.length;
        int xor = 0;
        for (int i = 0; i < n; i++) {
            xor = xor ^ nums[i];
            xor = xor ^ (i + 1);
        }

        int rightBit = xor & -xor;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if ((nums[i] & rightBit) != 0) {
                x = x^nums[i];
            } else {
                y = y^nums[i];
            }
            if (((i + 1) & rightBit) != 0) {
                x = x^(i + 1);
            } else {
                y = y^(i + 1);
            }
        }

        int dupli = -1, missing = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == x) {
                dupli = x;
                missing = y;
                break;
            } else if (nums[i] == y) {
                dupli = y;
                missing = x;
                break;
            }
        }
        return new int[]{missing, dupli};
    }
}


// Time complexity will be O(N).
// Space Compl. will be O(1).
