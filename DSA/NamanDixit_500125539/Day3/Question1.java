import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class Question1 {
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

        System.out.println("Enter value of k: ");
        int k=sc.nextInt();

        // Create a map to count frequency
        Map<Integer, Integer> freq = new HashMap<>();

        for (int num : nums) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        // Add only elements that appear exactly k times
        int sum = 0;
        for (int num : freq.keySet()) {
            if (freq.get(num) == k) {
                sum += num;
            }
        }

        System.out.println("Sum is: " + sum);
        
        sc.close(); // Always good to close the scanner
    }
}
