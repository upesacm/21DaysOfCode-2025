// Problem Statement: Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from 
// the set {1, 2, ...n} is missing and one number occurs twice in the array. The task is to find these two numbers. 
// Task: Find the missing number and the number that appears twice in the array. 
// Examples Input: [3, 1, 3] 
// Output: Missing: 2, Twice: 3

package DSA.Tanisha_500125283;

public class Day1Question2 {
    public static void findingNumber(int[] arr) {
        int n = arr.length;
        int[] count = new int[n + 1];

        for (int num : arr) {
            count[num]++;
        }

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) {
                missing = i;
            } else if (count[i] == 2) {
                duplicate = i;
            }
        }
        System.out.println("Missing: " + missing + ", Twice: " + duplicate);
    }

    public static void main(String[] args) {
        int[] arr = {3, 1, 3};
        findingNumber(arr);
    }
}
