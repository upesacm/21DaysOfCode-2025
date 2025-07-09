1. public class Rn {
    public static int[] rn(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            }
        }
        return nums;
    }
}

2. public class b {
    public static int[] fn(int[] nums) {
        int n = nums.length;
        int[] count = new int[n + 1]; 
        int duplicate = -1, missing = -1;

        for (int num : nums) {
            count[num]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) missing = i;
            if (count[i] == 2) duplicate = i;
        }

        return new int[]{duplicate, missing};
    }
}

3. public class SumArray {
    public static int sumOfElements(int[] nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return sum;
    }
}
