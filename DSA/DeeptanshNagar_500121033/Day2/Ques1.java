// DAY 2 <-----/---> QUE 1


// 1. Sum of All Even Numbers
// A problem that combines conditional logic with accumulation to filter and sum specific elements.

// Given an array of integers nums of size n, calculate and return the sum of all even numbers in the array.

// This problem combines conditional logic with accumulation, teaching you to filter elements based on specific criteria while performing mathematical operations on the filtered data.

// Your task: Calculate and return the sum of all even numbers in the array.

// Examples
// Input:

// nums = [1, 2, 3, 4, 5]
// Output: 6



public class Ques1 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int ans = addEven(arr);
        System.out.println(ans);
    }

    static int addEven(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] % 2 == 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
}

// Time Comp. = O(N)
// Space Comp. = O(1)
