import java.util.Scanner;

public class Question3 {
    static int removeElement(int nums[], int val) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length: ");

        int n = sc.nextInt();
        int nums[] = new int[n];
        System.out.println("Enter array elements: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        System.out.println("Enter value of val: ");
        int val = sc.nextInt();

        System.out.println(removeElement(nums, val));


        sc.close(); // Close the scanner
    }
}
