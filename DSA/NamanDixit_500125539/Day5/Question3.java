
import java.util.Arrays;
import java.util.Scanner;

public class Question3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //Enter array lenght
        System.out.println("Enter length of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        //Enter elements of the array

        System.out.println("Enter array elements: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        int num2[] = new int[n];
        for (int i = 0; i < n; i++) {
            num2[i] = nums[n - 1 - i];
        }

        if (Arrays.equals(nums, num2)) {
            System.out.println("true");
        } else {
            System.out.print("false");
        }
        sc.close(); // Always good to close the scanner

    }
}
