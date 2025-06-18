import java.util.HashMap;

public class KFrequencyElementSum {
    public static int kFrequencyElementSum(int[] nums, int k) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for (int num : nums) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }
        int sum = 0;
        for (int key : freq.keySet()) {
            if (freq.get(key) == k) {
                sum += key;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] nums1 = {2, 3, 9, 9};
        int k1 = 1;
        System.out.println("Output 1: " + kFrequencyElementSum(nums1, k1)); // 5

        int[] nums2 = {1, 8, 8, 8, 5, 6, 2};
        int k2 = 3;
        System.out.println("Output 2: " + kFrequencyElementSum(nums2, k2)); // 8
    }
}