public class Q2 {
    public static void main(String[] args) {
        int nums[] = {1,2,3,4,5,5};
        boolean res = duplicate(nums);
        System.out.println(res);
    }
    public static boolean duplicate(int[] nums) {
        int max = 0;
        for(int i :  nums){
            if(i >  max){
                max = i;
            }
        }
        int[] freq = new int[max + 1];
        for (int i : nums) {
            freq[i]++;
        }
        for ( int j = 0; j < freq.length; j++) {
            if(freq[j] > 1){
                return true; 
            } 
        }
        return false;
    }
}


