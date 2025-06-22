public class Q3 {
    public static void main(String[] args) {
        int nums[] = {3, 2, 2, 3};
        int val = 3;
        removeElement(nums, val);
    }
    public static void removeElement(int [] nums, int val){
        int i = 0;
        for (int j = 0;  j < nums.length ; j++){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        System.out.println("New length of the array: " + i);    
    }
}
