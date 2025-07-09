1.public class SumExactlyKTimes {
    public static int sumExactlyK(int[] nums, int k) {
        int sum = 0;
        boolean[] visited = new boolean[nums.length];

        for (int i = 0; i < nums.length; i++) {
            if (!visited[i]) {
                int count = 1;
                for (int j = i + 1; j < nums.length; j++) {
                    if (nums[i] == nums[j]) {
                        count++;
                        visited[j] = true;
                    }
                }
                if (count == k) {
                    sum += nums[i];
                }
            }
        }

        return sum;
    }
}

2. public class CheckDuplicates {
    public static boolean hasDuplicates(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
}

3.public class SecondLargest {
    public static int secondLargest(int[] nums) {
        int max = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;

        for (int num : nums) {
            if (num > max) {
                second = max;
                max = num;
            } else if (num > second && num != max) {
                second = num;
            }
        }

        if (second == Integer.MIN_VALUE) return -1;
        return second;
    }
}
