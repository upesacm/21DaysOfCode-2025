public class Day2_Question1{
    public static void main(String [] args){
        int nums[] = {1,2,3,4,5};
        int sumEven = evenSum(nums, nums.length);
        
        System.out.println("the sum of even numbers are :" + sumEven);
    }
    public static int evenSum(int nums[], int n){
        int sum = 0;
        for (int i : nums){
            if(i % 2 == 0){
                sum += i;
            }
        }
        return sum;
    }
}
