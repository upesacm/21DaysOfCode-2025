
import java.util.Arrays;
import java.util.Scanner;

public class Question2 {

    public static void missingNumber(int nums[]) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum = sum + nums[i];
        }
        Arrays.sort(nums);
        int totalsum = 0;
        System.out.println("missing numbers: ");
        totalsum = (nums.length + 1) * (nums.length + 2) / 2;
        int missingnumber = totalsum - sum;
        System.out.println(missingnumber);

    }

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
        missingNumber(nums);

        sc.close(); // Always good to close the scanner
    }
}
