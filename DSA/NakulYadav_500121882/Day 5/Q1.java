public class Q1 {
    public static void main(String[] args) {
        int nums[] = {4, 1, 2, 1, 2};
        System.out.println(uniqueEl(nums, nums.length));
    }
    public static int uniqueEl(int[] nums, int n) {
        int unique = 0;
        int Freq[] = new int[nums.length + 1];

        for(int i : nums){
            Freq[i]++;
        }
        for(int i = 0; i < Freq.length; i++){
            if(Freq[i] == 1){
                unique = i;
            }
        }
        return unique;
    }
}
