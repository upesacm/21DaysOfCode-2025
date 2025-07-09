public class question3 {
    public static void main(String[] args) {
        int num[] = {-5, -2, -8, -1, -3};
        System.out.println(maxElement(num));
    }
    public static int maxElement(int nums[]){
        int max = Integer.MIN_VALUE;
        for(int  i : nums){
            if(i > max){
                max = i;
            }
        }
        return max;
    }
}
