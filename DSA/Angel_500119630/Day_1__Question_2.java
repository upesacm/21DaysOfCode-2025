public class Day_1_Question_2{
    public static void main(String[] args) {
            int num[] = {3, 1, 3}; 
            int n = num.length;
            int result[] = missAndRepeated(num, n);

            System.out.println("Missing Number: " + result[0]);
            System.out.println("Repeated Number: " + result[1]);
    }
    public static int [] missAndRepeated(int[] nums, int n) {
        int[] freq = new int[n + 1];
        int missing = -1;
        int repeated = -1;

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        for(int i =1 ; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
            } else if (freq[i] > 1) {
                repeated = i;
            }
        }
      return new int[] {missing,repeated};
}

}
