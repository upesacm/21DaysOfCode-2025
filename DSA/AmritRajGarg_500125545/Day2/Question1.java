/*
1. Sum of All Even Numbers
A problem that combines conditional logic with accumulation to filter and sum specific elements.
Given an array of integers nums of size n, calculate and return the sum of all even numbers in the array.
This problem combines conditional logic with accumulation, teaching you to filter elements based on specific criteria 
while performing mathematical operations on the filtered data.
*/

public class Question1 {
    public static void main(String[] args) {
        int[] nums = {4, 7, 2, 9, 6, 3, 8};
        int sum = 0;

        for (int num : nums) {
            if (num % 2 == 0) sum += num; //here we check if the number is even
        }

        System.out.println("Sum of even numbers: " + sum);
    }
}
