
import java.util.Arrays;
import java.util.Scanner;

class Question3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        //Enter array lenght
        System.out.println("Enter array length: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        //Enter array elements
        System.out.println("Enter array elements: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        Arrays.sort(nums);
        if (n >= 2) {
            int second_largest = nums[n - 2];
            System.out.println("Second largest: "+second_largest);
        }
        sc.close(); // Always good to close the scanner

    }
}
