public class Q2 {
    public static void arrayindex(int[] nums){
        if(nums.length==0){
            System.out.println("Array is empty");
            return;
        }
        int start= nums[0];
        int end= nums.length;
        System.out.println("first:"+start);
        System.out.println("Last:"+end);
    }
    public static void main(String[] args) {
        int[] nums= {1,2,3,4};
        arrayindex(nums);
    }
    
}
