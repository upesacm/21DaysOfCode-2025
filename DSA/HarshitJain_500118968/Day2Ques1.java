public class Day2Ques1 {
    public static int sumOfEvenNumbers(int[] nums) {
        int sum = 0;
        for (int num : nums) {
            if (num % 2 == 0) {  
                sum += num;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] test1 = {1, 2, 3, 4, 5};
        int[] test2 = {10, 15, 20};
        int[] test3 = {1, 3, 5};
        System.out.println("Test 1: " + sumOfEvenNumbers(test1));
        System.out.println("Test 2: " + sumOfEvenNumbers(test2));
        System.out.println("Test 3: " + sumOfEvenNumbers(test3));
    }
} 