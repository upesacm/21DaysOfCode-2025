
import java.util.Scanner;

public class Question3 {

    public static int findlength(int nums[]) {
        if (nums.length == 0) {
            return 0;
        }
        int len = 1;
        int maxlen = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i - 1] < nums[i]) {
                len++;
            } else {
                len = 1;
            }
            maxlen = Math.max(len, maxlen);
        }
        return maxlen;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        int len =findlength(nums);
        System.out.println(len);
        sc.close();
    }
}
