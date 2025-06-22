import java.util.*;
public class Day1Question2 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n = scr.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements into the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scr.nextInt();
        }
        Arrays.sort(arr);
        int duplicate = -1, missing = -1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                duplicate = arr[i];
            } else if (arr[i + 1] - arr[i] > 1) {
                missing = arr[i] + 1;
            }
        }
        if (arr[0] != 1) {
            missing = 1;
        } else if (arr[n - 1] != n) {
            missing = n;
        }
        System.out.println("Duplicate number: " + duplicate);
        System.out.println("Missing number: " + missing);
    }
}
