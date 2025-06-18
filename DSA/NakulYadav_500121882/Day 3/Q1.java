public class Q1 {
    public static void main(String[] args) {
        int nums[] = {1,2,9,9};
        int res = UniqueInt(nums, 2);
        System.out.println(res);
    }
    public static int UniqueInt(int[] nums, int k) {
        int max = 0;
        for(int i :  nums){
            if(i >  max){
                max = i;
            }
        }
        int sum = 0;
        int[] freq = new int[max + 1];
        
        for (int i : nums) {
            freq[i]++;
        }
        for ( int j = 0; j < freq.length; j++) {
            if(freq[j] == k){
                sum += j;
            }
        }
        return sum;
    }
}
