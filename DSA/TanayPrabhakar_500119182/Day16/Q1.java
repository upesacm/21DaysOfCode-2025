public class question1 {
    public static void main(String[] args) {
        int nums[] = {10, 20, 30, 40, 50};
        System.out.println(Value(nums, 30));
    }
    public static int Value(int nums[],int target){
        
        for(int i = 0 ;i < nums.length;i++){
            if(nums[i] == target){
                target = i;
                return target;
            }
        }
        return -1;
    }
}
