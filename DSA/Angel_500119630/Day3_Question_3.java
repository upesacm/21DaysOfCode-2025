public class Day3_Question_3 {
    public static void main(String[] args) {
        int nums[] = {10, 20, 30, 40};
        System.out.println(sL(nums));
    }
    public static int sL(int nums[]){
        int max = Integer.MIN_VALUE; 
        int smax = Integer.MIN_VALUE;
        for(int i : nums ){
            if(i > max){
                smax = max;
                max = i;
            }
            else if (i < max && i > smax) {
                smax = i;
        }

    }
    return smax;
 }
}