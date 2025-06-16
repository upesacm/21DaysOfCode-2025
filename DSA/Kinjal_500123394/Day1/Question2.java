import java.util.*;

public class Question2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Enter the size of the array");
        if (n <= 0) {
            System.out.println("Size of the array should be greater than 0");

        }
        int nums[] = new int[n];
        System.out.println("Enter the elements of the array");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        HashMap<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);

        }

        int missing = -1, duplicate = -1;
        for (int i = 1; i <= n; i++) {
            int count = map.getOrDefault(i, 0);
            if (count == 0) {
                missing = i;
            } else if (count == 2) {
                duplicate = i;
            }
        }

        System.out.println("Missing: " + missing + " Repeating:" + duplicate);
        sc.close();
    }

}
