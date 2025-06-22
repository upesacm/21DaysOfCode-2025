
import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.ArrayList;
import java.util.List;


public class Question2 {

    public boolean isGood(int[] nums) {
        Arrays.sort(nums);
        int max = nums[nums.length - 1];
        if (nums.length != (max + 1)) {
            return false;
        }

        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i]) + 1);
            } else {
                map.put(nums[i] , 1);
            }
        }
        List<Integer> list = new ArrayList<>(map.values());
        int count = 0;
        for (int value : list) {
            if (value>= 2) {
                count++;
            }
        }
        if (map.get(max) == 2 && (count == 1)) {
            return true;
        }
        return false;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        System.out.println("Enter array elements (each between 1 and " + n + "): ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        Question2 obj = new Question2();
       boolean status= obj.isGood( nums);
       System.out.println(status);
        sc.close();
    }
}
