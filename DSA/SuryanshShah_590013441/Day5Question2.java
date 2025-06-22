import java.util.*;
public class Day5Question2 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array (should be n, where array has numbers from 0 to n):");
        int n = scr.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array (from 0 to n with one missing):");
        for (int i = 0; i < n; i++) {
            arr[i] = scr.nextInt();
        }
        Arrays.sort(arr);
        int missing = n; 
        for (int i = 0; i < n; i++) {
            if (arr[i] != i) {
                missing = i;
                break;
            }
        }
        System.out.println("The missing number is: " + missing);
    }
}
